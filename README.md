<!--
     Copyright 2014, General Dynamics C4 Systems

     SPDX-License-Identifier: GPL-2.0-only
-->

The seL4 microkernel
====================

[![CII Best Practices](https://bestpractices.coreinfrastructure.org/projects/5003/badge)](https://bestpractices.coreinfrastructure.org/projects/5003)
[![CI](https://github.com/seL4/seL4/actions/workflows/push.yml/badge.svg)](https://github.com/seL4/seL4/actions/workflows/push.yml)
[![seL4Test](https://github.com/seL4/seL4/actions/workflows/sel4test-deploy.yml/badge.svg)](https://github.com/seL4/seL4/actions/workflows/sel4test-deploy.yml)
[![C Parser](https://github.com/seL4/seL4/actions/workflows/cparser.yml/badge.svg)](https://github.com/seL4/seL4/actions/workflows/cparser.yml)
[![Compile](https://github.com/seL4/seL4/actions/workflows/compilation-checks.yml/badge.svg)](https://github.com/seL4/seL4/actions/workflows/compilation-checks.yml)
[![Proof Sync](https://github.com/seL4/seL4/actions/workflows/preprocess-deploy.yml/badge.svg)](https://github.com/seL4/seL4/actions/workflows/preprocess-deploy.yml)
[![RefMan](https://github.com/seL4/seL4/actions/workflows/manual.yml/badge.svg)](https://github.com/seL4/seL4/actions/workflows/manual.yml)
[![XML](https://github.com/seL4/seL4/actions/workflows/xml_lint.yml/badge.svg)](https://github.com/seL4/seL4/actions/workflows/xml_lint.yml)

This project contains the source code of seL4 microkernel.

For details about the seL4 microkernel, including details about its formal
correctness proof, please see the [`sel4.systems`][1] website and associated
[FAQ][2].

DOIs for citing recent releases of this repository:

- [![DOI][4]](https://doi.org/10.5281/zenodo.591727)

We welcome contributions to seL4. Please see the website for information
on [how to contribute][3].

This repository is usually not used in isolation, but as part of the build
system in a larger project.

  [1]: http://sel4.systems/
  [2]: https://sel4.systems/About/FAQ.html
  [3]: https://sel4.systems/Contribute/
  [4]: https://zenodo.org/badge/DOI/10.5281/zenodo.591727.svg
  [5]: https://sel4.systems/Info/Docs/seL4-manual-latest.pdf
  [6]: https://docs.sel4.systems/projects/buildsystem/host-dependencies.html
  [7]: https://docs.sel4.systems/releases/seL4.html
  [8]: https://docs.sel4.systems/projects/sel4/api-doc.html

seL4 Basics
---------------

- [Tutorials](https://docs.sel4.systems/Tutorials)
- [Overview](https://sel4.systems/Learn/)
- [Doc Site](https://docs.sel4.systems/)
- [seL4 libraries](https://docs.sel4.systems/projects/user_libs)
- [seL4Test](https://docs.sel4.systems/projects/sel4test/)
- [Debugging guide](https://docs.sel4.systems/projects/sel4-tutorials/debugging-guide.html)
- [Benchmarking guide](https://docs.sel4.systems/projects/sel4-tutorials/benchmarking-guide.html)
- [Virtualization on seL4](https://docs.sel4.systems/projects/virtualization/)
- [Host Build Dependencies](https://docs.sel4.systems/projects/buildsystem/host-dependencies.html)
- [Porting seL4](https://docs.sel4.systems/projects/sel4/porting.html)

Community
---------

- Open-source help and support:
  - [Discourse Forum](https://sel4.discourse.group/)
  - [Mattermost Chat](https://mattermost.trustworthy.systems/sel4-external/)
  - [seL4 announce mailing list](https://lists.sel4.systems/postorius/lists/announce.sel4.systems)
  - [seL4 devel mailing list](https://lists.sel4.systems/postorius/lists/devel.sel4.systems)

See also the [contact] links on the seL4 website.

[contact]: https://sel4.systems/contact.html

Reporting security vulnerabilities
----------------------------------

If you believe you have found a security vulnerability in seL4 or related
software, we ask you to follow our [vulnerability disclosure policy][VDP].

[VDP]: https://github.com/seL4/seL4/blob/master/SECURITY.md

Manual
------

A hosted PDF version of the [manual](manual/) for the most recent release can be found [here][5].

A web version of the [API documentation][8] is available as well.

Repository Overview
-------------------

- `include` and `src`: C and ASM source code of seL4
- `tools`: build tools
- `libsel4`: C bindings for the seL4 ABI
- `manual`: LaTeX sources of the seL4 reference manual

Build Instructions
------------------

See the seL4 website for [build instructions][6].

Status
------

- [Releases][7]: list of available seL4 releases
- [Roadmap](https://sel4.systems/roadmap.html): new features in development
- [Hardware Support](https://docs.sel4.systems/Hardware/): information about hardware platform ports
- [Kernel Options](https://docs.sel4.systems/projects/sel4/configurations.html): information about available
  config options and features

License
-------

See the file [LICENSE.md](./LICENSE.md).
