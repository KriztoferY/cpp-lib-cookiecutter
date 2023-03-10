# {{cookiecutter.project_slug}} <!-- omit in toc -->

{{cookiecutter.project_short_description}}

```cpp
// Show me the magic
...
```

For more details, visit the [documentation site](https://{{cookiecutter.github_username}}.github.io/{{cookiecutter.project_slug}}).

Here's what you need to get started.

- [Dependencies](#dependencies)
- [Building \& Testing the Project](#building--testing-the-project)
- [For Developers \& Contributors](#for-developers--contributors)
- [License](#license)

## Dependencies

To build the project, you will need
- g++ (version 5+) or equivalent compiler that supports C++17 and above
- CMake (version 3.15+)
- Make (or equivalent build tool)
- GoogleTest (to be installed as submodule of the project using git)
- Git

### Installing googletest <!-- omit in toc -->

```bash
$ git submodule add --force https://github.com/google/googletest.git test/lib/googletest
```

## Building & Testing the Project

Several bash scripts are included in the `scripts/` subdirectory to simplify the build and test process, both debug and release, if you've CMake installed on the system. So you don't have to run neither `ctest` nor any executable test programs -- each successful build will have passed all the tests included.

For all of the following commands, it's assumed that you're in the `scripts/` dir. If not, `cd` into it like


```bash
$ cd /path/to/project/root/scripts
```

or modify the commands with the right path accordingly.

### Full build <!-- omit in toc -->

To make the first build or a clean build, run either:

```bash
$ ./cmake-build-debug.sh        # debug build
$ ./cmake-build-release.sh      # release build
```

On success, you'll see the success message at the end of the build and test processes on the terminal like so:

```bash
...         # build/test info...
👍 Congrats! You are all set.
$ >
```

In that case, you'll find three (or four) newly created subdirectories under the project root.
1. `build/[debug|release]/` --- contains all artifacts created during the build process
2. `include/` --- contains the header files of the library.
3. `bin/` --- contains the executable demo program `queue_demo`.
4. `lib/` --- (if applicable) contains the static libraries (`*.a` archive files), which you may copy into your system library folder or your project that depends on it, along with the `include/` folder.


If any errors arise during the build process or the test process, otherwise, you'll get the error message at the end like so:

```bash
...         # build/test info...
👎 Oops! Something went wrong.
$ >
```

### Rebuild <!-- omit in toc -->

To build the whole project again after making changes to the source code, you may simply run either
```bash
$ ./cmake-rebuild-debug.sh      # debug
$ ./cmake-rebuild-release.sh    # release
```

### Clean <!-- omit in toc -->

Alternatively, if you'd like to have a clean build starting from scratch, you may do so by first running the following before either one of two `*-build-*.sh` scripts.

```bash
$ ./clean-build.sh
```

⚠️ **WARNING** : It permanently removes all three/four subdirectories created during a build process. So use it with caution if you choose to save any other files at those locations.

## For Developers & Contributors

### Project structure <!-- omit in toc -->

```bash
.
├── src/
├── test/
├── scripts/
├── docs/                   
├── build/                  # to be created in the first build
├── bin/                    # to be created in the first build
├── include/                # to be created in the first build
├── lib/                    # to be created in the first build
├── ProjectConfig.h.in 
├── CMakeLists.txt
├── Doxyfile
├── LICENSE
└── README.md
```
Header and source files for the library and demo program are located in the `src/` subdirectory, whereas those for unit tests are located in the `test/` subdirectory.

### Running tests <!-- omit in toc -->

Although tests are automated via the bash scripts included, you may also run the included tests independently, which is typically useful for debugging after failing builds.

To do so, first `cd` into the `build/[debug|release]` subdirectory under the project root. Then run

```bash
$ ctest --verbose --output-on-failure
```

For debugging a failed build, you may want to add also the `--rerun-failed` flag to run only the tests that failed previously.

To find out all available options, run `ctest -help`.

### Code formatting <!-- omit in toc -->

Install `clang-format` and run it with the included `.clang-format` config file at the project root.

If you use an IDE, you're strongly revised to configure it to automatically run `clang-format` on each save.

### Documentation <!-- omit in toc -->

#### Style <!-- omit in toc -->

All documentation text are written in the Javadoc style `/** ... */` with `@` as command marker. In the so-called "banner" form (typically for classes and functions), include aligned leading asterisks `*` in each sandwiched lines. For text that can fit in a single line not exceeding 80 characters (including the comment delimiting characters), use the inline form, either succeeding a statement or on the line preceding the code block to document.

#### Site generation <!-- omit in toc -->

To build the documentation site for the project, you will need
- Doxygen
- Python 3.7+
- Sphinx
- Furo
- Breathe

Visit the [documentation site](https://{{cookiecutter.github_username}}.github.io/{{cookiecutter.project_slug}}) for details.

## License

The project is licensed under the [BSD 3-Clause License](https://github.com/{{cookiecutter.github_username}}/{{cookiecutter.project_slug}}/blob/main/LICENSE).

## Acknowledgement <!-- omit in toc -->

This project is bootstrapped using [Cookiecutter](https://cookiecutter.io) with the [cpp-lib-cookiecutter](https://github.com/KriztoferY/cpp-lib-cookiecutter) template.

Copyright &copy; {{cookiecutter.copyright_year}} [{{cookiecutter.full_name}}](https://github.com/{{cookiecutter.github_username}}). All rights reserved.
