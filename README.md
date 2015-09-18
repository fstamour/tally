# tally

Minimalist C++ program to sum numbers from stdin.

> P.S. The only C++ feature really used is the templating.

## Usage

```
$ echo 1 2 3 | tally
6
```

```
$ cut -d, -f 2 data.csv | tally
<SUM>
```

## Dependencies

 * A C++ compiler.
 * Maybe a `make` command too.

> Tested on linux only, but should work anywhere a C++ compiler is avaiable.

## Possible ameliorations/Todos

 * Usage (`-h` and `--help` flags)
 * Man page (plus textinfo and maybe some other type of docs?)
 * Add flags to return the sum, the number of element and the mean (and maybe some other really frequently used metrics).
 * Take number from args.
 * More error handling (watch for possible buffer overflow and actually do something with the return values).
 * Add flags to choose the type of the `numbers`, `sum` and etc. (int, char, wchar, float/8, 16, 32, 64 bits).
 * Add arbritary size type (bigint and bigfloat) and make it the default (to prevent bad suprises).
 * Add makefile targets to package it (`.rpm`, `.deb`, arch's `pkgbuild`).
 * Versioning (semver)

## Related

[There are other ways to do this (Stack overflow)](http://stackoverflow.com/questions/450799/shell-command-to-sum-integers-one-per-line)

