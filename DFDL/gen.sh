#!/bin/bash

# Exit if any commands fail

set -ex

# Run the TDML tests to confirm the schemas and tests work with daffodil

DAFFODIL_CLASSPATH=src:test daffodil test -i -I daffodil test/TestV3.tdml
DAFFODIL_CLASSPATH=src:test daffodil test -i -I daffodil test/TestV3RR.tdml
DAFFODIL_CLASSPATH=src:test daffodil test -i -I daffodil test/TestV4.tdml
DAFFODIL_CLASSPATH=src:test daffodil test -i -I daffodil test/TestV4RR.tdml

# Generate all the C source code

DAFFODIL_CLASSPATH=src:test daffodil generate c -s src/oncrpcv3.dfdl.xsd       -r onc_rpc3 gen/onc_rpc3
DAFFODIL_CLASSPATH=src:test daffodil generate c -s src/RequestReplyV3.dfdl.xsd -r RqstRplyV3 gen/RqstRplyV3
DAFFODIL_CLASSPATH=src:test daffodil generate c -s src/oncrpc.dfdl.xsd         -r onc_rpc  gen/onc_rpc
DAFFODIL_CLASSPATH=src:test daffodil generate c -s src/RequestReply.dfdl.xsd   -r RqstRply gen/RqstRply

# Compile all the C source code

make -C gen/onc_rpc3/c
make -C gen/RqstRplyV3/c
make -C gen/onc_rpc/c
make -C gen/RqstRply/c

# Run the TDML tests to confirm the schemas and tests work with daffodilC

DAFFODIL_CLASSPATH=src:test daffodil test -i -I daffodilC test/TestV3.tdml
DAFFODIL_CLASSPATH=src:test daffodil test -i -I daffodilC test/TestV3RR.tdml
DAFFODIL_CLASSPATH=src:test daffodil test -i -I daffodilC test/TestV4.tdml
DAFFODIL_CLASSPATH=src:test daffodil test -i -I daffodilC test/TestV4RR.tdml

# Generate all the VHDL source code

DAFFODIL_CLASSPATH=src:test daffodil generate vhdl -s src/oncrpcv3.dfdl.xsd       -r onc_rpc3 gen/onc_rpc3
DAFFODIL_CLASSPATH=src:test daffodil generate vhdl -s src/RequestReplyV3.dfdl.xsd -r RqstRplyV3 gen/RqstRplyV3
DAFFODIL_CLASSPATH=src:test daffodil generate vhdl -s src/oncrpc.dfdl.xsd         -r onc_rpc  gen/onc_rpc
DAFFODIL_CLASSPATH=src:test daffodil generate vhdl -s src/RequestReply.dfdl.xsd   -r RqstRply gen/RqstRply

# Compile all the VHDL source code

make -C gen/onc_rpc3/vhdl
make -C gen/RqstRplyV3/vhdl
make -C gen/onc_rpc/vhdl
make -C gen/RqstRply/vhdl

# Run the TDML tests to confirm the schemas and tests work with daffodilVHDL

DAFFODIL_CLASSPATH=src:test daffodil test -i -I daffodilVHDL test/TestV3.tdml
DAFFODIL_CLASSPATH=src:test daffodil test -i -I daffodilVHDL test/TestV3RR.tdml
DAFFODIL_CLASSPATH=src:test daffodil test -i -I daffodilVHDL test/TestV4.tdml
DAFFODIL_CLASSPATH=src:test daffodil test -i -I daffodilVHDL test/TestV4RR.tdml

# And we're done

exit 0
