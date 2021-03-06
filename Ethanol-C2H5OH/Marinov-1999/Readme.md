Ethanol by Marinov(1999)
===========
[Reference website](https://combustion.llnl.gov/archived-mechanisms/ethanol)

Marinov, N. M, "A Detailed Chemical Kinetic Model for High Temperature Ethanol Oxidation," Int. J. Chem. Kinet. 31:183-220 (1999); Lawrence Livermore National Laboratory, Livermore, CA, UCRL-JC-131657.  

- Cantera version 2.4.0
```shell
cd Cantera
ck2cti --input=../Chemkin/ethanol.mech --thermo=../Chemkin/ethanol_thermo.dat --transport=../Chemkin/ethanol_trans.dat  --output ethanol.cti --permissive
```
- ScanMan version 4.2.1
```shell
cd FlameMaster
# Create chemkin and thermo data files from ethanol.cti. Rename the output file 
python3 ../../../Tools/soln2ck.py  -cti ../Cantera/ethanol.cti
# Run ScanMan
ScanMan -i ethanol-clean.inp  -t thermo-clean.inp  -m ethanol_trans.dat  -f chemkin
```
