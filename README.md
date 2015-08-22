# ivef-tools
*DO NOT USE, see recent versions in https://github.com/openivef/ivef-sdk*

For older versions of the ivef-sdk, the ivef-tools part contained the schema to code generator. The source code is easily build with qmake from Qt. The executable that is made can be used to generate classes in one of the flavours qt-C++, java, php or ObjectiveC.
```
bin/xsd2code --file=ivef.xsd --qt --out=output/ivef-qt --prefix=IVEF
```
