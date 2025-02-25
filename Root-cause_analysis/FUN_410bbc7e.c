void FUN_410bbc7e(undefined4 param_1,undefined4 param_2,uint *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined auStack3096 [3072];
  
  bVar7 = (*param_3 & 0x3fffffff) == 0;
  iVar2 = DAT_410bc074;
  if (bVar7) {
    iVar2 = DAT_410bc074 + 5;
  }
  uVar1 = FUN_40fcf434(param_1,iVar2,!bVar7,1,param_2);
  iVar2 = FUN_40fcf434(param_1,DAT_410bc074 + 8,*param_3 >> 0x1e,2,uVar1);
  if ((int)*param_3 < 0) {
    uVar1 = FUN_40fcf434(param_1,DAT_410bc074 + 0xe,*(byte *)(param_3 + 1) >> 6,2,iVar2);
    iVar2 = FUN_40fcf434(param_1,DAT_410bc074 + 0x10,*(undefined *)((int)param_3 + 5),1,uVar1);
    if (((int)((uint)*(byte *)(param_3 + 1) << 0x18) < 0) &&
       (iVar2 = FUN_410b9f6e(param_1,iVar2,param_3 + 2), iVar2 == 0)) {
      return;
    }
    if (((int)((uint)*(byte *)(param_3 + 1) << 0x19) < 0) &&
       (iVar2 = FUN_410b9f6e(param_1,iVar2,param_3 + 5), iVar2 == 0)) {
      return;
    }
  }
  iVar2 = FUN_410bb6ce(param_1,iVar2,param_3 + 8);
  if (((iVar2 != 0) && (iVar2 = FUN_410ba3b2(param_1,iVar2,param_3 + 0x2a), iVar2 != 0)) &&
     ((iVar2 = FUN_40fcf434(param_1,DAT_410bc074 + 0x20,*(byte *)((int)param_3 + 0xb2) >> 6,2,iVar2)
      , -1 < (int)((uint)*(byte *)((int)param_3 + 0xb2) << 0x18) ||
      (iVar2 = LteRrc_ARFCN_ValueEUTRA(param_1,iVar2,param_3 + 0x2d), iVar2 != 0)))) {
    if ((int)((uint)*(byte *)((int)param_3 + 0xb2) << 0x19) < 0) {
      iVar2 = FUN_40fcf434(param_1,DAT_410bc074 + 0x28,*(undefined *)((int)param_3 + 0xb6),3,iVar2);
    }
    iVar2 = LteRrc_AdditionalSpectrumEmission(param_1,iVar2,(int)param_3 + 0xb7);
    if ((iVar2 != 0) &&
       ((((-1 < (int)(*param_3 << 1) ||
          (iVar2 = LteRrc_MBSFN_SubframeConfigList(param_1,iVar2,param_3 + 0x2e), iVar2 != 0)) &&
         (iVar2 = FUN_410b6cb8(param_1,iVar2,param_3 + 0x2f), iVar2 != 0)) &&
        ((*param_3 & 0x3fffffff) != 0)))) {
      uVar1 = FUN_40fcf434(param_1,DAT_410bc074 + 0x35,0,1,iVar2);
      uVar1 = FUN_40fcf434(param_1,DAT_410bc074 + 0x37,9,6,uVar1);
      bVar7 = -1 < (int)(*param_3 << 2);
      if (bVar7) {
        iVar2 = DAT_410bc074 + 0x41;
      }
      else {
        iVar2 = DAT_410bc074 + 0x3c;
      }
      uVar1 = FUN_40fcf434(param_1,iVar2,!bVar7,1,uVar1);
      if (((int)(*param_3 << 3) < 0) || ((int)(*param_3 << 4) < 0)) {
        uVar6 = 1;
        iVar2 = DAT_410bc074 + 0x46;
      }
      else {
        uVar6 = 0;
        iVar2 = DAT_410bc074 + 0x4b;
      }
      uVar1 = FUN_40fcf434(param_1,iVar2,uVar6,1,uVar1);
      bVar7 = -1 < (int)(*param_3 << 5);
      if (bVar7) {
        iVar2 = DAT_410bc074 + 0x55;
      }
      else {
        iVar2 = DAT_410bc074 + 0x50;
      }
      uVar1 = FUN_40fcf434(param_1,iVar2,!bVar7,1,uVar1);
      uVar4 = *param_3;
      if ((((int)(uVar4 << 6) < 0) || ((int)(uVar4 << 7) < 0)) ||
         (((int)(uVar4 << 8) < 0 || ((int)(uVar4 << 9) < 0)))) {
        uVar6 = 1;
        iVar2 = DAT_410bc074 + 0x5a;
      }
      else {
        uVar6 = 0;
        iVar2 = DAT_410bc074 + 0x5f;
      }
      uVar1 = FUN_40fcf434(param_1,iVar2,uVar6,1,uVar1);
      bVar7 = -1 < (int)(*param_3 << 10);
      if (bVar7) {
        iVar2 = DAT_410bc074 + 0x69;
      }
      else {
        iVar2 = DAT_410bc074 + 100;
      }
      uVar1 = FUN_40fcf434(param_1,iVar2,!bVar7,1,uVar1);
      if (((int)(*param_3 << 0xb) < 0) || ((int)(*param_3 << 0xc) < 0)) {
        uVar6 = 1;
        iVar2 = DAT_410bc074 + 0x6e;
      }
      else {
        uVar6 = 0;
        iVar2 = DAT_410bc074 + 0x73;
      }
      uVar1 = FUN_40fcf434(param_1,iVar2,uVar6,1,uVar1);
      uVar4 = *param_3;
      if (((((int)(uVar4 << 0xd) < 0) || ((int)(uVar4 << 0xe) < 0)) || ((int)(uVar4 << 0xf) < 0)) ||
         ((int)(uVar4 << 0x10) < 0)) {
        uVar6 = 1;
        iVar2 = DAT_410bc074 + 0x78;
      }
      else {
        uVar6 = 0;
        iVar2 = DAT_410bc074 + 0x7d;
      }
      uVar1 = FUN_40fcf434(param_1,iVar2,uVar6,1,uVar1);
      bVar7 = -1 < (int)((uint)*(ushort *)param_3 << 0x11);
      if (bVar7) {
        iVar2 = DAT_410bc074 + 0x87;
      }
      else {
        iVar2 = DAT_410bc074 + 0x82;
      }
      uVar1 = FUN_40fcf434(param_1,iVar2,!bVar7,1,uVar1);
      if (((int)(*param_3 << 0x12) < 0) || ((int)(*param_3 << 0x13) < 0)) {
        uVar6 = 1;
        iVar2 = DAT_410bc074 + 0x8c;
      }
      else {
        uVar6 = 0;
        iVar2 = DAT_410bc074 + 0x91;
      }
      uVar1 = FUN_40fcf434(param_1,iVar2,uVar6,1,uVar1);
      bVar7 = -1 < (int)((uint)*(ushort *)param_3 << 0x14);
      if (bVar7) {
        iVar2 = DAT_410bc074 + 0x9b;
      }
      else {
        iVar2 = DAT_410bc074 + 0x96;
      }
      iVar2 = FUN_40fcf434(param_1,iVar2,!bVar7,1,uVar1);
      if ((int)(*param_3 << 2) < 0) {
        thunk_FUN_04005b8a(auStack3096,0xc00);
        FUN_40fcfed8(param_1,auStack3096);
        iVar3 = LteRrc_SystemInformationBlockType2_v10l0_IEs_multiBandInfoList_v10l0
                          (param_1,0,param_3[0x32]);
        FUN_40fcfee0(param_1);
        iVar5 = DAT_410bc074 + 0xae;
        param_3[0x30] = (int)(iVar3 + 7 + ((uint)(iVar3 + 7 >> 0x1f) >> 0x1d)) >> 3;
        param_3[0x31] = (uint)auStack3096;
        uVar1 = FUN_40fcf98a(param_1,iVar5,auStack3096,param_3[0x30],iVar2 + 8,8);
        iVar2 = Encode_extensionLen(param_1,DAT_410bc074 + 0xb2,iVar2,uVar1);
        if (iVar2 == 0) {
          return;
        }
      }
      uVar4 = *param_3;
      if (((int)(uVar4 << 3) < 0) || ((int)(uVar4 << 4) < 0)) {
        bVar7 = -1 < (int)(uVar4 << 3);
        if (bVar7) {
          iVar3 = DAT_410bc074 + 0xc0;
        }
        else {
          iVar3 = DAT_410bc074 + 0xbb;
        }
        uVar1 = FUN_40fcf434(param_1,iVar3,!bVar7,1,iVar2 + 8);
        bVar7 = -1 < (int)(*param_3 << 4);
        if (bVar7) {
          iVar3 = DAT_410bc074 + 0xca;
        }
        else {
          iVar3 = DAT_410bc074 + 0xc5;
        }
        iVar3 = FUN_40fcf434(param_1,iVar3,!bVar7,1,uVar1);
        if (((int)(*param_3 << 3) < 0) &&
           (iVar3 = FUN_410b9f6e(param_1,iVar3,param_3 + 0x33), iVar3 == 0)) {
          return;
        }
        if (((int)(*param_3 << 4) < 0) &&
           (iVar3 = FUN_410b9f6e(param_1,iVar3,param_3 + 0x36), iVar3 == 0)) {
          return;
        }
        iVar2 = Encode_extensionLen(param_1,DAT_410bc074 + 0xd5,iVar2,iVar3);
        if (iVar2 == 0) {
          return;
        }
      }
      if ((-1 < (int)(*param_3 << 5)) ||
         (((iVar3 = FUN_40fcf434(param_1,DAT_410bc074 + 0xde,1,1,iVar2 + 8),
           -1 < (int)(*param_3 << 5) ||
           (iVar3 = FUN_410b9f6e(param_1,iVar3,param_3 + 0x39), iVar3 != 0)) &&
          (iVar2 = Encode_extensionLen(param_1,DAT_410bc074 + 0xea,iVar2,iVar3), iVar2 != 0)))) {
        uVar4 = *param_3;
        if (((((int)(uVar4 << 6) < 0) || ((int)(uVar4 << 7) < 0)) || ((int)(uVar4 << 8) < 0)) ||
           ((int)(uVar4 << 9) < 0)) {
          bVar7 = -1 < (int)(uVar4 << 6);
          iVar3 = DAT_410bc480;
          if (bVar7) {
            iVar3 = DAT_410bc480 + 5;
          }
          uVar1 = FUN_40fcf434(param_1,iVar3,!bVar7,1,iVar2 + 8);
          bVar7 = -1 < (int)(*param_3 << 7);
          if (bVar7) {
            iVar3 = DAT_410bc480 + 0xf;
          }
          else {
            iVar3 = DAT_410bc480 + 10;
          }
          uVar1 = FUN_40fcf434(param_1,iVar3,!bVar7,1,uVar1);
          bVar7 = -1 < (int)(*param_3 << 8);
          if (bVar7) {
            iVar3 = DAT_410bc480 + 0x19;
          }
          else {
            iVar3 = DAT_410bc480 + 0x14;
          }
          uVar1 = FUN_40fcf434(param_1,iVar3,!bVar7,1,uVar1);
          bVar7 = -1 < (int)(*param_3 << 9);
          if (bVar7) {
            iVar3 = DAT_410bc480 + 0x23;
          }
          else {
            iVar3 = DAT_410bc480 + 0x1e;
          }
          iVar3 = FUN_40fcf434(param_1,iVar3,!bVar7,1,uVar1);
          if ((int)(*param_3 << 6) < 0) {
            iVar3 = FUN_40fcf434(param_1,DAT_410bc480 + 0x28,*(undefined *)(param_3 + 0x3c),0,iVar3)
            ;
          }
          if ((int)(*param_3 << 7) < 0) {
            iVar3 = FUN_40fcf434(param_1,DAT_410bc480 + 0x2d,*(undefined *)((int)param_3 + 0xf1),0,
                                 iVar3);
          }
          if ((int)(*param_3 << 8) < 0) {
            iVar3 = FUN_40fcf434(param_1,DAT_410bc480 + 0x32,*(undefined *)((int)param_3 + 0xf2),0,
                                 iVar3);
          }
          if (((int)(*param_3 << 9) < 0) &&
             (iVar3 = LteRrc_AC_BarringPerPLMN_List_r12(param_1,iVar3,param_3 + 0x3d), iVar3 == 0))
          {
            return;
          }
          iVar2 = Encode_extensionLen(param_1,DAT_410bc480 + 0x39,iVar2,iVar3);
          if (iVar2 == 0) {
            return;
          }
        }
        if ((int)(*param_3 << 10) < 0) {
          uVar1 = FUN_40fcf434(param_1,DAT_410bc480 + 0x42,1,1,iVar2 + 8);
          if ((int)(*param_3 << 10) < 0) {
            uVar1 = FUN_40fcf434(param_1,DAT_410bc480 + 0x4c,*(undefined *)(param_3 + 0x3e),0,uVar1)
            ;
          }
          iVar2 = Encode_extensionLen(param_1,DAT_410bc480 + 0x4f,iVar2,uVar1);
          if (iVar2 == 0) {
            return;
          }
        }
        uVar4 = *param_3;
        if (((int)(uVar4 << 0xb) < 0) || ((int)(uVar4 << 0xc) < 0)) {
          bVar7 = -1 < (int)(uVar4 << 0xb);
          if (bVar7) {
            iVar3 = DAT_410bc480 + 0x5d;
          }
          else {
            iVar3 = DAT_410bc480 + 0x58;
          }
          uVar1 = FUN_40fcf434(param_1,iVar3,!bVar7,1,iVar2 + 8);
          bVar7 = -1 < (int)(*param_3 << 0xc);
          if (bVar7) {
            iVar3 = DAT_410bc480 + 0x67;
          }
          else {
            iVar3 = DAT_410bc480 + 0x62;
          }
          iVar3 = FUN_40fcf434(param_1,iVar3,!bVar7,1,uVar1);
          if (((int)(*param_3 << 0xb) < 0) &&
             (iVar3 = FUN_410b9f4e(param_1,iVar3,param_3 + 0x3f), iVar3 == 0)) {
            return;
          }
          if (((int)(*param_3 << 0xc) < 0) &&
             (iVar3 = LteRrc_ACDC_BarringPerPLMN_List_r13(param_1,iVar3,param_3 + 0x41), iVar3 == 0)
             ) {
            return;
          }
          iVar2 = Encode_extensionLen(param_1,DAT_410bc480 + 0x72,iVar2,iVar3);
          if (iVar2 == 0) {
            return;
          }
        }
        uVar4 = *param_3;
        if (((((int)(uVar4 << 0xd) < 0) || ((int)(uVar4 << 0xe) < 0)) || ((int)(uVar4 << 0xf) < 0))
           || ((int)(uVar4 << 0x10) < 0)) {
          bVar7 = -1 < (int)(uVar4 << 0xd);
          if (bVar7) {
            iVar3 = DAT_410bc480 + 0x80;
          }
          else {
            iVar3 = DAT_410bc480 + 0x7b;
          }
          uVar1 = FUN_40fcf434(param_1,iVar3,!bVar7,1,iVar2 + 8);
          bVar7 = -1 < (int)(*param_3 << 0xe);
          if (bVar7) {
            iVar3 = DAT_410bc480 + 0x8a;
          }
          else {
            iVar3 = DAT_410bc480 + 0x85;
          }
          uVar1 = FUN_40fcf434(param_1,iVar3,!bVar7,1,uVar1);
          bVar7 = -1 < (int)(*param_3 << 0xf);
          if (bVar7) {
            iVar3 = DAT_410bc480 + 0x94;
          }
          else {
            iVar3 = DAT_410bc480 + 0x8f;
          }
          uVar1 = FUN_40fcf434(param_1,iVar3,!bVar7,1,uVar1);
          bVar7 = -1 < (int)((uint)*(ushort *)param_3 << 0x10);
          if (bVar7) {
            iVar3 = DAT_410bc480 + 0x9e;
          }
          else {
            iVar3 = DAT_410bc480 + 0x99;
          }
          iVar3 = FUN_40fcf434(param_1,iVar3,!bVar7,1,uVar1);
          if (((int)(*param_3 << 0xd) < 0) &&
             (iVar3 = FUN_410b9ba8(param_1,iVar3,param_3 + 0x42), iVar3 == 0)) {
            return;
          }
          if (((int)(*param_3 << 0xe) < 0) &&
             (iVar3 = LteRrc_UDT_RestrictingPerPLMN_List_r13(param_1,iVar3,param_3 + 0x43),
             iVar3 == 0)) {
            return;
          }
          if (((int)(*param_3 << 0xf) < 0) &&
             (iVar3 = LteRrc_CIOT_EPS_OptimisationInfo_r13(param_1,iVar3,param_3 + 0x44), iVar3 == 0
             )) {
            return;
          }
          if ((int)((uint)*(ushort *)param_3 << 0x10) < 0) {
            iVar3 = FUN_40fcf434(param_1,DAT_410bc480 + 0xaf,*(undefined *)(param_3 + 0x45),0,iVar3)
            ;
          }
          iVar2 = Encode_extensionLen(param_1,DAT_410bc480 + 0xb2,iVar2,iVar3);
          if (iVar2 == 0) {
            return;
          }
        }
        if ((int)((uint)*(ushort *)param_3 << 0x11) < 0) {
          uVar1 = FUN_40fcf434(param_1,DAT_410bc480 + 0xbb,1,1,iVar2 + 8);
          if ((int)((uint)*(ushort *)param_3 << 0x11) < 0) {
            uVar1 = FUN_40fcf434(param_1,DAT_410bc480 + 0xc5,*(undefined *)((int)param_3 + 0x115),0,
                                 uVar1);
          }
          iVar2 = Encode_extensionLen(param_1,DAT_410bc480 + 200,iVar2,uVar1);
          if (iVar2 == 0) {
            return;
          }
        }
        uVar4 = *param_3;
        if (((int)(uVar4 << 0x12) < 0) || ((int)(uVar4 << 0x13) < 0)) {
          bVar7 = -1 < (int)(uVar4 << 0x12);
          if (bVar7) {
            iVar3 = DAT_410bc480 + 0xd6;
          }
          else {
            iVar3 = DAT_410bc480 + 0xd1;
          }
          uVar1 = FUN_40fcf434(param_1,iVar3,!bVar7,1,iVar2 + 8);
          bVar7 = -1 < (int)((uint)*(ushort *)param_3 << 0x13);
          if (bVar7) {
            iVar3 = DAT_410bc480 + 0xe0;
          }
          else {
            iVar3 = DAT_410bc480 + 0xdb;
          }
          iVar3 = FUN_40fcf434(param_1,iVar3,!bVar7,1,uVar1);
          if (((int)((uint)*(ushort *)param_3 << 0x12) < 0) &&
             (iVar3 = LteRrc_MBSFN_SubframeConfigList_v1430(param_1,iVar3,param_3 + 0x46),
             iVar3 == 0)) {
            return;
          }
          if ((int)((uint)*(ushort *)param_3 << 0x13) < 0) {
            iVar3 = FUN_40fcf434(param_1,DAT_410bc480 + 0xe9,*(undefined *)(param_3 + 0x47),0,iVar3)
            ;
          }
          iVar2 = Encode_extensionLen(param_1,DAT_410bc480 + 0xec,iVar2,iVar3);
          if (iVar2 == 0) {
            return;
          }
        }
        if (((int)((uint)*(ushort *)param_3 << 0x14) < 0) &&
           ((iVar3 = FUN_40fcf434(param_1,DAT_410bc480 + 0xf5,1,1,iVar2 + 8),
            -1 < (int)((uint)*(ushort *)param_3 << 0x14) ||
            (iVar3 = LteRrc_PLMN_InfoList_r15(param_1,iVar3,param_3 + 0x48), iVar3 != 0)))) {
          Encode_extensionLen(param_1,DAT_410bc484,iVar2,iVar3);
        }
      }
    }
  }
  return;
}
