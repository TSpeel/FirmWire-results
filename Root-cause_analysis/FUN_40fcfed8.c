void FUN_40fcfed8(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = param_2;
  param_1[1] = uVar1;
  return;
}