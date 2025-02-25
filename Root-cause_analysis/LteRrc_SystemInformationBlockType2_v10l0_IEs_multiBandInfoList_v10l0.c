int LteRrc_SystemInformationBlockType2_v10l0_IEs_multiBandInfoList_v10l0
              (int param_1,undefined4 param_2,byte *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int **ppiVar6;
  byte *pbVar7;
  undefined4 unaff_r4;
  uint uVar8;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 in_lr;
  
  iVar4 = FUN_40fcf434(param_1,DAT_410ba77c,*param_3 >> 6,2,param_2);
  if (((-1 < (int)((uint)*param_3 << 0x18)) ||
      (iVar4 = LteRrc_SystemInformationBlockType2_v8h0_IEs_multiBandInfoList
                         (param_1,iVar4,param_3 + 4), iVar4 != 0)) &&
     ((int)((uint)*param_3 << 0x19) < 0)) {
    pbVar7 = param_3 + 8;
    iVar5 = iVar4;
    iVar4 = FUN_40fcf434(param_1,DAT_410ba34c,*pbVar7 >> 6,2,iVar4,unaff_r4,unaff_r5,in_lr);
    if (((-1 < (int)((uint)*pbVar7 << 0x18)) ||
        (iVar4 = LteRrc_ARFCN_ValueEUTRA_v9e0(param_1,iVar4,param_3 + 0xc), iVar4 != 0)) &&
       ((int)((uint)*pbVar7 << 0x19) < 0)) {
      pbVar7 = param_3 + 0x10;
      iVar4 = FUN_40fcf434(param_1,DAT_410ba348,*pbVar7 >> 6,2,iVar4,iVar5,unaff_r4,unaff_r5);
      if ((int)((uint)*pbVar7 << 0x18) < 0) {
        iVar4 = FUN_40fcf98a(param_1,DAT_410ba348 + 3,*(undefined4 *)(param_3 + 0x18),
                             *(undefined4 *)(param_3 + 0x14),iVar4,8);
      }
      if (-1 < (int)((uint)*pbVar7 << 0x19)) {
        return iVar4;
      }
      uVar3 = FUN_40fcf434(param_1,DAT_410ba344,param_3[0x1c] >> 7,1,iVar4,unaff_r4,unaff_r5,in_lr);
      iVar4 = LteRrc_AdditionalSpectrumEmission_v10l0(param_1,uVar3,param_3 + 0x1e);
      if (iVar4 != 0) {
        ppiVar6 = (int **)(param_3 + 0x20);
        piVar1 = *ppiVar6;
        uVar8 = 0;
        iVar5 = iVar4 + 3;
        piVar2 = piVar1;
        while( true ) {
          if (piVar2 == (int *)0x0) {
            *ppiVar6 = piVar1;
            FUN_40fcf434(param_1,0xae4e,uVar8 - 1 & 0xff,3,iVar4,unaff_r4,unaff_r5,unaff_r6);
            if ((uVar8 == 0) || (*(uint *)PTR_DAT_410ba33c < uVar8)) {
              *(undefined *)(param_1 + 0x14) = 1;
              *(undefined **)(param_1 + 0x18) = PTR_s_LteRrc_SystemInformationBlockTyp_410ba340;
              iVar5 = 0;
            }
            return iVar5;
          }
          iVar5 = LteRrc_AdditionalSpectrumEmission_v10l0(param_1,iVar5,piVar2 + 1);
          if (iVar5 == 0) break;
          uVar8 = uVar8 + 1;
          piVar2 = (int *)**ppiVar6;
          *ppiVar6 = piVar2;
        }
        return 0;
      }
    }
  }
  return iVar4;
}