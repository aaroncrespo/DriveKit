# DriveKit

> **Note**: This was written to scratch own itch. There are probably better ways to handle CocoaPods and Carthage as a Library. If you find a use for this and would like to help make it better checkout [GTMAppAuth issue](https://github.com/google/GTMAppAuth/issues/24) or help make this project better with pull requests.


What is this:

Working on a project which uses `Carthage`, but google drive services and google auth both use `CocoaPods` as a Library builder/generator which. I would also prefer to not have have my project mix and match `CocoaPods` and `Carthage`

This is a simple Carthage compatible project used to isolate the `CocoaPods` consuming code from a containing project.


## Requirements

hopefully: none

## Installation

Installed via `git submodule`, `Carthage` or ~~pod 'DriveKit'~~ once use whatever means you prefer to add as a depenency to a project

Note: this is not a public podspec because im not sure about name collissions or redistribution issues.

## Quirks/Issues

#### Google Service

Due to Using `google-service-api`s headers in the 'raw' the following GCC preprocessor flags must be added to avoid non module based imports.

```
GTL_USE_SESSION_FETCHER=1
GTL_USE_FRAMEWORK_IMPORTS=1
```

#### Google AppAuth

`GTMAppAuth` has some nullibility and docstring issues I would prefer to not edit the code so a custom header is defined withing target Support. tvOS needs these files but my project doesnt need tvOS.

#### AppAuth

AppAuth-iOS/AppAuth supports carthage but GTMAppAuth has some weird building issues on those releases. Works fine when building as a dependency but local builds don't play well with the project layout. Workaround: he local scheme is suppressed to avoid multiple builds depency builds use the `carthage` `AppAuth-iOS` dependency local builds and GTMSession/GTMAppAuth use the local build settings and headers.  

## Author

Aaron Crespo, aaroncrespo@gmail.com

## License

DriveKit is available under the MIT license. See the LICENSE file for more info.
