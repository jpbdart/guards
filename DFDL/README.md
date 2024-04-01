# DFDL Schema: NFS

Contains [Data Format Description Language] (DFDL) schemas to parse a
variety of [Network File System] (NFS) protocols.  The main schemas
and their functions are shown below:

| File Name | RFC | Description  |
| --- | --- | --- |
| oncrpc.dfdl.xsd       | [RFC1831], updating to [RFC5531] | ONC-RPC |
| portmap.dfdl.xsd      | [RFC1833] | portmap requests |
| portmapReply.dfdl.xsd | [RFC1833] | portmap replies |
| nfsv3.dfdl.xsd        | [RFC1813] | NFSv3 requests & replies |
| nfsv4.dfdl.xsd        | [RFC8881] & [RFC7862] | NFSv4 requests |
| nfsv4Common.dfdl.xsd  | [RFC8881] & [RFC7862] | NFSv4 common data structures |
| nfsv4Reply.dfdl.xsd   | [RFC8881] & [RFC7862] | NFSv4 replies |
| RequestReply.dfdl.xsd | N/A | Expect a command request then a reply |
| ReplyMain.dfdl.xsd    | N/A | Send a reply to the correct program |

## Build requirements

Before building this repo, you need to clone the [Apache Daffodil]
repo, install its build requirements, build the Apache Daffodil repo,
and publish its latest snapshot locally.  You will need the following
build tools and libraries:

* [cc, clang, or gcc]
* [java]
* [libmxml]
* [sbt]

Then you need to clone the Apache Daffodil [repo], build it, and
publish its latest snapshot locally:

```shell
git clone https://github.com/apache/daffodil.git
cd daffodil
sbt publishLocal
```

## Running the tests

You can run all of this repo's tests with:

```shell
cd DFDL_NFS
sbt test
```

You also can run tests one group at a time by using the following
syntax: `sbt "testOnly XXXXX"`, where `XXXXX` is one of the following
Daffodil (usual Scala runtime) or Daffodil (C code generation) groups:

* TestV3
* TestV3RR
* TestV4
* TestV4RR

* TestV3C
* TestV3RRC
* TestV4C
* TestV4RRC

Running all the Daffodil (usual Scala runtime) groups should give 138
passed tests:

| Description | # of Tests |
| --- | --- |
| Test V3 commands | 31 |
| Test V3 commands and their replies | 3 |
| Test V4 commands | 21 |
| Test V4 commands and their replies | 14 |

Running all the Daffodil (C code generation) groups should give the
same number of passed tests:

| Description | # of Tests |
| --- | --- |
| Test V3 commands | 31 |
| Test V3 commands and their replies | 3 |
| Test V4 commands | 21 |
| Test V4 commands and their replies | 14 |

## Current issues

The reply testing for NFSv4 is mostly complete and are being added
incrementally. Some tests may look like they are available, but if
they are commented out in the `TestV4RR.scala` file, they are not
ready.

## Future changes

Break up some of the tests into smaller units; for example, moving
`mountd` to its own test file.

Additional bounds testing of parameters inside the request and reply
structures.

Updated: 15 Feb 2024

[Apache Daffodil]: https://daffodil.apache.org/
[Data Format Description Language]: https://en.wikipedia.org/wiki/Data_Format_Description_Language
[Network File System]: https://en.wikipedia.org/wiki/Network_File_System
[RFC1813]: https://www.rfc-editor.org/rfc/rfc1813
[RFC1831]: https://www.rfc-editor.org/rfc/rfc1831
[RFC1833]: https://www.rfc-editor.org/rfc/rfc1833
[RFC5531]: https://www.rfc-editor.org/rfc/rfc5531
[RFC7862]: https://www.rfc-editor.org/rfc/rfc7862
[RFC8881]: https://www.rfc-editor.org/rfc/rfc8881
[build requirements]: https://github.com/apache/daffodil/blob/main/BUILD.md
[cc, clang, or gcc]: https://en.wikipedia.org/wiki/C99
[java]: https://adoptium.net/
[libmxml]: https://www.msweet.org/mxml/
[repo]: https://github.com/apache/daffodil/
[sbt]: https://www.scala-sbt.org/
