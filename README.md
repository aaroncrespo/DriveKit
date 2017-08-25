# DriveKit

> **Note**: This was written to scratch my own itch. There are probably better ways to handle CocoaPods and Carthage as a Library Author. If you find a use for this and would like to help make it better checkout [GTMAppAuth issue](https://github.com/google/GTMAppAuth/issues/24) or help make this project better with pull requests.


What is this:

Working on a project which uses `Carthage`, but google drive services and google auth both use `CocoaPods` as a Library builder/generator which. I would also prefer to not have have my project mix and match `CocoaPods` and `Carthage`

This is a simple Carthage compatible project used to isolate the `CocoaPods` consuming code from a containing project.


## Requirements

hopefully: none

## Installation

Installed via `git submodule`, `Carthage` or ~~pod 'DriveKit'~~. Use whatever means need to add this as a depenency to a project

Note: this is not a public podspec because im not sure about name collisions or redistribution issues.

## Quirks/Issues

#### Google Service

The build is manually setup. The google repo is very close to being Carthage compatable.

#### Google AppAuth

`GTMAppAuth` has some nullibility and docstring issues I would prefer to not edit the code so a custom header is defined within target Support. tvOS would need these files but my project doesnt need tvOS.

#### AppAuth

AppAuth-iOS/AppAuth supports carthage but GTMAppAuth has some weird building issues on those releases. Works fine when building as a dependency but local builds don't play well with the project layout. Workaround: the local scheme is suppressed. To avoid multiple duplicate depency builds use the `carthage` `AppAuth-iOS` dependency. This builds AppAuth and GTMSession/GTMAppAuth use products and headers.

## Author

Aaron Crespo, aaroncrespo@gmail.com

## License

DriveKit is available under the MIT license. See the LICENSE file for more info.
