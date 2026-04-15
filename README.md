# Roads - Minilogue XD Oscillator

## How to compile and deploy

You have three options for compiling this script into a `.mnlgxdunit` file to load onto your Minilogue XD:

### Option A: GitHub Actions (Zero Install, Recommended)
1. Initialize a Git repository in this folder and push it to GitHub.
2. The included GitHub Action will automatically run in the cloud.
3. Go to the "Actions" tab in your GitHub repository, click the latest workflow run, and download the compiled `minilogue-xd-Roads.zip` artifact.

### Option B: Docker (Mac/Linux/Windows)
If you have Docker installed locally, you can build it without installing the SDK:
1. Open a terminal in this folder.
2. Run `chmod +x build.sh` followed by `./build.sh`.
3. The compiled oscillator will be exported to the `build_out/` directory!

### Option C: Manual Installation
1. Download and install the [logue-sdk](https://github.com/korginc/logue-sdk).
2. Install the GNU Arm Embedded Toolchain.
3. Open a terminal in this folder and run:
   `make LOGUE_SDK_DIR=/path/to/your/logue-sdk`

## Loading onto the Minilogue XD
Once you have the `.mnlgxdunit` file, use the [Korg Minilogue XD Sound Librarian](https://www.korg.com/us/support/download/software/0/811/4215/) to send the file to your synthesizer.
