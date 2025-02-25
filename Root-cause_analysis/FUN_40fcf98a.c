void FUN_40fcf98a(undefined4 param_1,undefined4 param_2,int param_3,uint param_4,undefined4 param_5,
                 int param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if (param_6 == 1) {
    uVar4 = 8;
  }
  else {
    uVar4 = 1;
  }
  uVar3 = param_4;
  uVar2 = param_2;
  iVar5 = param_3;
  uVar6 = param_4;
  if (0x10000 < (int)param_4) {
    do {
      FUN_40fcf38c(param_1,8,param_5);
      uVar1 = FUN_40fcf434(param_1,param_2,0xc4,8,param_5,param_1,uVar2,iVar5,uVar6);
      FUN_40fcf38c(param_1,param_6 << 0x10,uVar1);
      param_5 = FUN_40fcf68a(param_1,0x20f,(param_4 - uVar3) / uVar4 + param_3,param_6 << 0x10,uVar1
                            );
      uVar3 = uVar3 - 0x10000;
    } while (0x10000 < (int)uVar3);
  }
  if (0x3ffe < (int)uVar3) {
    FUN_40fcf38c(param_1,5,param_5);
    uVar1 = FUN_40fcf434(param_1,param_2,0x18,5,param_5,param_1,uVar2,iVar5,uVar6);
    FUN_40fcf38c(param_1,3,uVar1);
    uVar1 = FUN_40fcf434(param_1,param_2,
                         (uVar3 + ((uint)((int)uVar3 >> 0x1f) >> 0x12)) * 0x400 >> 0x18,3,uVar1);
    FUN_40fcf38c(param_1,((int)uVar3 / 0x4000) * 0x4000 * param_6,uVar1);
    param_5 = FUN_40fcf68a(param_1,0x21c,(param_4 - uVar3) / uVar4 + param_3,
                           ((int)uVar3 / 0x4000) * 0x4000 * param_6,uVar1);
    uVar3 = (int)uVar3 % 0x4000;
  }
  if ((int)uVar3 < 0x80) {
    FUN_40fcf38c(param_1,1,param_5);
    uVar2 = FUN_40fcf434(param_1,param_2,0,1,param_5,param_1,uVar2,iVar5,uVar6);
    FUN_40fcf38c(param_1,7,uVar2);
    uVar2 = FUN_40fcf434(param_1,param_2,uVar3 & 0xff,7,uVar2);
  }
  else {
    FUN_40fcf38c(param_1,2,param_5);
    uVar2 = FUN_40fcf434(param_1,param_2,2,2,param_5,param_1,uVar2,iVar5,uVar6);
    FUN_40fcf38c(param_1,0xe,uVar2);
    uVar2 = FUN_40fcf4be(param_1,param_2,uVar3 & 0xffff,0xe,uVar2);
  }
  FUN_40fcf38c(param_1,uVar3 * param_6,uVar2);
  FUN_40fcf68a(param_1,0x234,(param_4 - uVar3) / uVar4 + param_3,uVar3 * param_6,uVar2);
  return;
}
