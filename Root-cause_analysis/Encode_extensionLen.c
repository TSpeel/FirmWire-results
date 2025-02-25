int Encode_extensionLen(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = (param_4 - param_3) + -8;
  if (iVar1 == 0) {
    iVar1 = 8;
    uVar3 = 1;
  }
  else {
    iVar2 = (param_4 - param_3) + -1;
    uVar3 = (int)(iVar2 + ((uint)(iVar2 >> 0x1f) >> 0x1d)) >> 3;
    iVar1 = uVar3 * 8 - iVar1;
  }
  if ((int)uVar3 < 0x80) {
    FUN_40fcf434(param_1,param_2,uVar3 & 0xff,8,param_3);
    return iVar1 + param_4;
  }
  *(undefined *)(param_1 + 0x14) = 6;
  *(char **)(param_1 + 0x18) = "Encode_extensionLen";
  return 0;
}
