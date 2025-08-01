## DacValues

This tool generates numbers to recreate waveforms using our DAC hardware. These numbers are used
in the firmware code to generate various waveforms.

### Prerequisites

1. Zig compiler 0.14.0
2. GPU Make

There is no particular reason to use Zig language, other than my liking for it.

### Building and running

`make` will build a binary in the `out` directory. 
```bash
$ make
$ ./out/dv sine     # to produce values representing a sine wave
```

It is possible to run the binary using `make run` like shown below. `ARGS` environment variable
is used to pass arguments to the `dv` binary.

Or using the shortcut mentioned above

```bash
$ ARGS=sine make run
```

### Unittests

```bash
$ make test
```

# Feedback

Open a GitHub issue or drop a email at arjobmukherjee@gmail.com. I would love to hear your
suggestions and feedbacks.
