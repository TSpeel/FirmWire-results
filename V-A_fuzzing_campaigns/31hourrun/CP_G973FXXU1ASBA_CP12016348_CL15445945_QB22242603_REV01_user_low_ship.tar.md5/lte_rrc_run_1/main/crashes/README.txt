Command line used to find this crash:

/workspaces/FirmWire/ndss22_experiments/AFLplusplus/afl-fuzz -i /workspaces/FirmWire/ndss22_experiments/V-A_fuzzing_campaigns/inputs/lte_rrc -o /workspaces/FirmWire/ndss22_experiments/V-A_fuzzing_campaigns/results/CP_G973FXXU1ASBA_CP12016348_CL15445945_QB22242603_REV01_user_low_ship.tar.md5/lte_rrc_run_1 -t 10000 -m none -M main -U -- ./firmwire.py --fuzz lte_rrc --fuzz-input @@ --consecutive-ports 30100 --restore-snapshot CP_G973FXXU1ASBA_CP12016348_CL15445945_QB22242603_REV01_user_low_ship.tar.md5 /workspaces/FirmWire/ndss22_experiments/firmware_samples/CP_G973FXXU1ASBA_CP12016348_CL15445945_QB22242603_REV01_user_low_ship.tar.md5

If you can't reproduce a bug outside of afl-fuzz, be sure to set the same
memory limit. The limit used for this fuzzing session was 0 B.

Need a tool to minimize test cases before investigating the crashes or sending
them to a vendor? Check out the afl-tmin that comes with the fuzzer!

Found any cool bugs in open-source tools using afl-fuzz? If yes, please drop
an mail at <afl-users@googlegroups.com> once the issues are fixed

  https://github.com/AFLplusplus/AFLplusplus

