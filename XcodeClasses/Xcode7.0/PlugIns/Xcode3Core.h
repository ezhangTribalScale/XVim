//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

#pragma mark -

//
// File: /Applications/Xcode-7GM.app/Contents/PlugIns/Xcode3Core.ideplugin/Contents/MacOS/Xcode3Core
// UUID: 20A0F1E4-BD58-3ACF-8B06-67CE79B155EA
//
//                           Arch: x86_64
//                Current version: 8184.0.0
//          Compatibility version: 1.0.0
//                 Source version: 8184.0.0.0.0
//       Minimum Mac OS X version: 10.10.0
//                    SDK version: 10.11.0
//
// Objective-C Garbage Collection: Unsupported
//
//                       Run path: @loader_path/../Frameworks
//                               = /Applications/Xcode-7GM.app/Contents/PlugIns/Xcode3Core.ideplugin/Contents/Frameworks
//                       Run path: @loader_path/../../../
//                               = /Applications/Xcode-7GM.app/Contents/PlugIns
//                       Run path: @executable_path/../Frameworks
//                               = /Applications/Xcode-7GM.app/Contents/PlugIns/Xcode3Core.ideplugin/Contents/Frameworks
//

@protocol IDEContainerDelegate <NSObject>

@optional
- (void)_container:(IDEContainer *)arg1 didChangeFromFilePath:(DVTFilePath *)arg2 toFilePath:(DVTFilePath *)arg3;
@end

@protocol IDEInitialization
+ (BOOL)ide_initializeWithOptions:(int)arg1 error:(id *)arg2;
@end

@protocol IDELocalizationWorkReadStrings
@property(retain) NSDictionary *IDELocalizationWork_comments;
@property(retain) NSDictionary *IDELocalizationWork_strings;
@property(retain) DVTFilePath *IDELocalizationWork_path;
@end

@protocol IDELocalizationWorkSystemTask
@property(retain) NSNumber *IDELocalizationWork_exitStatus;
@property(retain) NSArray *IDELocalizationWork_arguments;
@property(retain) DVTFilePath *IDELocalizationWork_launchPath;
@end

@protocol IDELocalizationWorkWriteStrings
@property(retain) DVTFilePath *IDELocalizationWork_path;
@property BOOL IDELocalizationWork_createdNewSubitem;
@property(retain) DVTLocale *IDELocalizationWork_language;
@property(retain) IDEGroup<IDELocalizedGroup> *IDELocalizationWork_group;
@property(retain) IDEContainer<IDELocalizedContainer> *IDELocalizationWork_container;
@property(retain) NSDictionary *IDELocalizationWork_comments;
@property(retain) NSDictionary *IDELocalizationWork_strings;
@end

@protocol IDELocalizedGroup <NSObject>
- (void)addNewReferenceForLocale:(DVTLocale *)arg1 filePath:(DVTFilePath *)arg2 completionBlock:(void (^)(BOOL, NSError *))arg3;
- (DVTFilePath *)proposedFilePathForLocalization:(DVTLocale *)arg1 fileType:(DVTFileDataType *)arg2;
- (IDEFileReference *)subitemForLocale:(DVTLocale *)arg1;
- (IDEContainer<IDELocalizedContainer> *)localizedContainer;
- (NSArray *)subitems;
@end

@protocol IDEPortalEntitlementsCoordinatorPlatform <NSObject>
- (NSDictionary *)willRequestProfileWithFeatures:(NSDictionary *)arg1 usingWildcardAppID:(BOOL)arg2;
- (NSDictionary *)didReadProfileFeatures:(NSDictionary *)arg1;
- (id)initWithCapabilitiesContext:(id <IDECapabilitiesContextProviding>)arg1;
@end

@protocol IDESourceTreeProvider <NSObject>
+ (NSString *)stringByExpandingSourceTreeReferencesInString:(NSString *)arg1;
@end

@protocol IDETemplateOptionParent <NSObject>
- (void)valueDidChangeForOption:(IDETemplateOption *)arg1;
- (IDEWorkspace *)workspace;
- (NSString *)identifier;
@end

@protocol IDEWorkspaceDelegate <IDEContainerDelegate>
- (void)_workspace:(IDEWorkspace *)arg1 failedToResolveContainerForProjectFile:(IDEFileReference *)arg2;

@optional
- (void)_workspace:(IDEWorkspace *)arg1 didChangeSimpleFilesFocusedTo:(BOOL)arg2;
- (void)_workspace:(IDEWorkspace *)arg1 didChangeFinishedLoadingTo:(BOOL)arg2;
@end

@protocol NSObject
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;
@property(readonly) unsigned long long hash;
- (struct _NSZone *)zone;
- (unsigned long long)retainCount;
- (id)autorelease;
- (oneway void)release;
- (id)retain;
- (BOOL)respondsToSelector:(SEL)arg1;
- (BOOL)conformsToProtocol:(Protocol *)arg1;
- (BOOL)isMemberOfClass:(Class)arg1;
- (BOOL)isKindOfClass:(Class)arg1;
- (BOOL)isProxy;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2;
- (id)performSelector:(SEL)arg1;
- (id)self;
- (Class)class;
- (BOOL)isEqual:(id)arg1;

@optional
@property(readonly, copy) NSString *debugDescription;
@end

@protocol Xcode3ProjectCreationErrorHandling <NSObject>
- (NSString *)errorMessage;
- (BOOL)didEncounterFatalError;

@optional
- (BOOL)shouldOpenProjectReadOnlyAtPath:(NSString *)arg1;
- (void)unableToOpenProjectAtPath:(NSString *)arg1 reason:(NSString *)arg2;
- (BOOL)shouldOpenProjectOfMismatchingVersion:(unsigned long long)arg1 atPath:(NSString *)arg2;
@end

@protocol Xcode3ProjectTemplateOptionParent <IDETemplateOptionParent>
- (BOOL)isUsableWithOptions:(NSArray *)arg1;
@end

@protocol Xcode3ProjectTemplateUnitParent <NSObject>
- (void)valueDidChangeForOption:(Xcode3ProjectTemplateOption *)arg1;
@end

@protocol __ARCLiteIndexedSubscripting__
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
@end

@protocol __ARCLiteKeyedSubscripting__
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
@end

@interface CommandLineLicenseHelper : NSObject
{
    NSString *_licensePath;
    NSBundle *_xcodeBundle;
    DVTLicenseAgreementHelper *_licenseAgreementHelper;
}

+ (BOOL)agreeToLicense;
+ (BOOL)hasAgreedToLicense;
+ (unsigned long long)showCommandLineLicenseUIIfNeeded:(BOOL)arg1;
- (void).cxx_destruct;
- (BOOL)_agreeToLicense;
- (unsigned long long)showLicenseUIIfNeeded:(BOOL)arg1;
- (BOOL)_isRunningAsSuperUser;
- (BOOL)_shouldShowLicenseAgreement;
- (BOOL)userHasWriteableHomeDirectory;
- (BOOL)isTTY;
- (unsigned long long)promptForAgreement;
- (void)printLicense;
- (id)launchTaskAndReturnOutputForTaskPath:(id)arg1 taskArguments:(id)arg2;
- (BOOL)displayLicenseHasAgreed:(BOOL)arg1;
- (const char *)getLicensePath;
- (id)initWithXcodeBundle:(id)arg1;

@end

@interface FirstLaunchExperienceHelper : NSObject
{
}

+ (BOOL)needToInstallPackages;

@end

@interface NSMutableString (Xcode3ProjectTemplateDefinitionNodeAdditions)
- (void)appendNonEmptyString:(id)arg1 indenting:(long long)arg2 withString:(id)arg3 wildcardString:(id)arg4;
@end

@interface NSString (Xcode3ProjectTemplateFactoryExtensions)
- (long long)XC3_numericCompare:(id)arg1;
@end

@interface Xcode3BuildSettingsCommandLineVerb : IDESchemeBasedCommandLineVerb
{
}

+ (int)performWithEnvironment:(id)arg1;
+ (id)optionDefinitionsWithEnvironment:(id)arg1;
+ (BOOL)requiresScheme;

@end

@interface Xcode3BuildSettingsDictionary : NSObject
{
}

+ (id)macroDefinitionTableByParsingXcconfigFileAtPath:(id)arg1 baseDirectoryPath:(id)arg2 error:(id *)arg3;

@end

@interface Xcode3CommandLineBuildTool : NSObject <IDEWorkspaceDelegate>
{
    id _containerDidOpenContainerNotificationObserver;
    DVTCommandLineParser *_parser;
    BOOL _shouldExit;
    BOOL _exportWithOriginalSigningIdentity;
    BOOL _allTargets;
    BOOL _skipUnsupportedDestinations;
    BOOL _parallelizeTargets;
    BOOL _hideShellScriptEnvironment;
    BOOL _dontActuallyRunCommands;
    BOOL _skipUnavailableActions;
    BOOL _forceImport;
    int _toolCommand;
    NSString *_name;
    NSArray *_arguments;
    NSDictionary *_environment;
    NSFileHandle *_standardInput;
    NSFileHandle *_standardOutput;
    NSFileHandle *_standardError;
    long long _exitStatus;
    NSString *_projectName;
    NSArray *_targetNames;
    NSString *_workspaceName;
    NSString *_schemeName;
    NSString *_xcconfigPathFromOption;
    NSString *_xcconfigPathFromEnvVar;
    NSString *_actionResultsBundlePathWithBaselineOverridesFromOption;
    NSString *_automaticBaselineDescription;
    NSString *_nameOfFileToFind;
    NSString *_archivePath;
    NSString *_exportOptionsPlist;
    NSString *_exportDestinationPath;
    NSString *_exportFormat;
    NSString *_exportSigningIdentity;
    NSString *_exportInstallerIdentity;
    NSString *_exportProvisioningProfile;
    NSArray *_buildActions;
    NSArray *_potentialBuildActions;
    NSArray *_buildSettingAssignmentStrings;
    Xcode3Project *_project;
    NSMutableArray *_targets;
    IDEWorkspace *_workspace;
    IDEScheme *_scheme;
    NSMutableDictionary *_perActionRunDestinations;
    NSString *_configurationName;
    NSArray *_architectures;
    NSString *_baseSdkName;
    NSArray *_toolchainNames;
    NSArray *_destinationSpecifications;
    NSNumber *_destinationTimeout;
    NSNumber *_maxConcurrency;
    NSString *_localizationPath;
    NSArray *_exportLanguages;
    NSString *_codeCoverageEnabled;
    NSString *_addressSanitizerEnabled;
    DVTMacroDefinitionTable *_synthesizedMacros;
    DVTMacroDefinitionTable *_macrosFromCommandLine;
    DVTMacroDefinitionTable *_macrosFromXcconfigOption;
    DVTMacroDefinitionTable *_macrosFromXcconfigEnvVar;
    NSMutableDictionary *_userDefaults;
    NSMutableDictionary *_environmentUserDefaults;
    NSOperationQueue *_buildToolQueue;
    NSString *_resultBundlePath;
    NSDictionary *_serverOptions;
}

+ (id)sharedCommandLineBuildTool;
+ (id)filesInDirectory:(id)arg1 withExtensions:(id)arg2 errorString:(id *)arg3;
+ (id)knownWorkspaceWrapperExtensions;
+ (id)xcodebuildDebugLogAspect;
+ (id)timingLogAspect;
+ (BOOL)useArchiveActionForInstall;
@property(copy) NSDictionary *serverOptions; // @synthesize serverOptions=_serverOptions;
@property(retain) NSString *resultBundlePath; // @synthesize resultBundlePath=_resultBundlePath;
@property(retain) NSOperationQueue *buildToolQueue; // @synthesize buildToolQueue=_buildToolQueue;
@property(retain) NSMutableDictionary *environmentUserDefaults; // @synthesize environmentUserDefaults=_environmentUserDefaults;
@property(retain) NSMutableDictionary *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(retain) DVTMacroDefinitionTable *macrosFromXcconfigEnvVar; // @synthesize macrosFromXcconfigEnvVar=_macrosFromXcconfigEnvVar;
@property(retain) DVTMacroDefinitionTable *macrosFromXcconfigOption; // @synthesize macrosFromXcconfigOption=_macrosFromXcconfigOption;
@property(retain) DVTMacroDefinitionTable *macrosFromCommandLine; // @synthesize macrosFromCommandLine=_macrosFromCommandLine;
@property(retain) DVTMacroDefinitionTable *synthesizedMacros; // @synthesize synthesizedMacros=_synthesizedMacros;
@property(retain) NSString *addressSanitizerEnabled; // @synthesize addressSanitizerEnabled=_addressSanitizerEnabled;
@property(retain) NSString *codeCoverageEnabled; // @synthesize codeCoverageEnabled=_codeCoverageEnabled;
@property BOOL forceImport; // @synthesize forceImport=_forceImport;
@property(retain) NSArray *exportLanguages; // @synthesize exportLanguages=_exportLanguages;
@property(retain) NSString *localizationPath; // @synthesize localizationPath=_localizationPath;
@property BOOL skipUnavailableActions; // @synthesize skipUnavailableActions=_skipUnavailableActions;
@property BOOL dontActuallyRunCommands; // @synthesize dontActuallyRunCommands=_dontActuallyRunCommands;
@property(copy) NSNumber *maxConcurrency; // @synthesize maxConcurrency=_maxConcurrency;
@property BOOL hideShellScriptEnvironment; // @synthesize hideShellScriptEnvironment=_hideShellScriptEnvironment;
@property BOOL parallelizeTargets; // @synthesize parallelizeTargets=_parallelizeTargets;
@property(copy) NSNumber *destinationTimeout; // @synthesize destinationTimeout=_destinationTimeout;
@property BOOL skipUnsupportedDestinations; // @synthesize skipUnsupportedDestinations=_skipUnsupportedDestinations;
@property(copy) NSArray *destinationSpecifications; // @synthesize destinationSpecifications=_destinationSpecifications;
@property(retain) NSArray *toolchainNames; // @synthesize toolchainNames=_toolchainNames;
@property(copy) NSString *baseSdkName; // @synthesize baseSdkName=_baseSdkName;
@property(retain) NSArray *architectures; // @synthesize architectures=_architectures;
@property(copy) NSString *configurationName; // @synthesize configurationName=_configurationName;
@property(retain) NSMutableDictionary *perActionRunDestinations; // @synthesize perActionRunDestinations=_perActionRunDestinations;
@property(retain) IDEScheme *scheme; // @synthesize scheme=_scheme;
@property(retain) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property BOOL allTargets; // @synthesize allTargets=_allTargets;
@property(retain) NSMutableArray *targets; // @synthesize targets=_targets;
@property(retain) Xcode3Project *project; // @synthesize project=_project;
@property(retain) NSArray *buildSettingAssignmentStrings; // @synthesize buildSettingAssignmentStrings=_buildSettingAssignmentStrings;
@property(retain) NSArray *potentialBuildActions; // @synthesize potentialBuildActions=_potentialBuildActions;
@property(retain) NSArray *buildActions; // @synthesize buildActions=_buildActions;
@property BOOL exportWithOriginalSigningIdentity; // @synthesize exportWithOriginalSigningIdentity=_exportWithOriginalSigningIdentity;
@property(copy) NSString *exportProvisioningProfile; // @synthesize exportProvisioningProfile=_exportProvisioningProfile;
@property(copy) NSString *exportInstallerIdentity; // @synthesize exportInstallerIdentity=_exportInstallerIdentity;
@property(copy) NSString *exportSigningIdentity; // @synthesize exportSigningIdentity=_exportSigningIdentity;
@property(copy) NSString *exportFormat; // @synthesize exportFormat=_exportFormat;
@property(copy) NSString *exportDestinationPath; // @synthesize exportDestinationPath=_exportDestinationPath;
@property(copy) NSString *exportOptionsPlist; // @synthesize exportOptionsPlist=_exportOptionsPlist;
@property(copy) NSString *archivePath; // @synthesize archivePath=_archivePath;
@property(copy) NSString *nameOfFileToFind; // @synthesize nameOfFileToFind=_nameOfFileToFind;
@property(copy) NSString *automaticBaselineDescription; // @synthesize automaticBaselineDescription=_automaticBaselineDescription;
@property(copy) NSString *actionResultsBundlePathWithBaselineOverridesFromOption; // @synthesize actionResultsBundlePathWithBaselineOverridesFromOption=_actionResultsBundlePathWithBaselineOverridesFromOption;
@property(copy) NSString *xcconfigPathFromEnvVar; // @synthesize xcconfigPathFromEnvVar=_xcconfigPathFromEnvVar;
@property(copy) NSString *xcconfigPathFromOption; // @synthesize xcconfigPathFromOption=_xcconfigPathFromOption;
@property(copy) NSString *schemeName; // @synthesize schemeName=_schemeName;
@property(copy) NSString *workspaceName; // @synthesize workspaceName=_workspaceName;
@property(retain) NSArray *targetNames; // @synthesize targetNames=_targetNames;
@property(copy) NSString *projectName; // @synthesize projectName=_projectName;
@property(nonatomic) BOOL shouldExit; // @synthesize shouldExit=_shouldExit;
@property int toolCommand; // @synthesize toolCommand=_toolCommand;
@property long long exitStatus; // @synthesize exitStatus=_exitStatus;
@property(retain) NSFileHandle *standardError; // @synthesize standardError=_standardError;
@property(retain) NSFileHandle *standardOutput; // @synthesize standardOutput=_standardOutput;
@property(retain) NSFileHandle *standardInput; // @synthesize standardInput=_standardInput;
@property(copy) NSDictionary *environment; // @synthesize environment=_environment;
@property(copy) NSArray *arguments; // @synthesize arguments=_arguments;
@property(copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)run;
- (void)_importLocalizationsAndExit;
- (void)_exportLocalizationsAndExit;
- (void)_exportArchiveAndExit;
- (void)_distributeArchiveAndExit;
- (id)_availableExportArchiveOptionsSection;
- (void)_printVerboseSDKListAndExit;
- (void)_printVerboseInfoForSDK:(id)arg1 keysToEmit:(id)arg2;
- (void)_printShortSDKListAndExit;
- (void)_enumerateAllPlatformsAlphabeticallyWithBlock:(CDUnknownBlockType)arg1;
- (void)_printPathToLibraryAndExit;
- (void)_printPathToExecutableAndExit;
- (id)_sdkForUseWithFind;
- (void)_printContainerInformationAndExit;
- (void)_printVersionInfoAndExit;
- (void)_showBuildSettings;
- (void)_buildWithTimingSection:(id)arg1;
- (void)unableToOpenProjectAtPath:(id)arg1 reason:(id)arg2;
- (void)_workspace:(id)arg1 failedToResolveContainerForProjectFile:(id)arg2;
- (void)_resolveInputOptionsWithTimingSection:(id)arg1;
- (void)_resolveRunDestinationsForBuildAction:(id)arg1;
- (void)_resolveBaseSdk;
- (id)_resolveSdk:(id)arg1;
- (id)_stringByResolvingSymlinksInPath:(id)arg1;
- (void)_parseOptions;
- (id)_actionStringForBuildAction:(id)arg1;
- (id)_schemeCommandForBuildAction:(id)arg1 outSchemeTask:(int *)arg2;
- (id)_supportedBuildActions;
- (void)_printErrorString:(id)arg1 andFailWithCode:(long long)arg2;
- (void)_printWarningString:(id)arg1;
- (unsigned long long)_projectLoadingTimeout;
- (unsigned long long)_schemeLoadingTimeout;
- (id)overridingProperties;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface Xcode3Core : NSObject
{
}

@end

@interface Xcode3CoreInitializer : NSObject <IDEInitialization>
{
}

+ (BOOL)ide_initializeWithOptions:(int)arg1 error:(id *)arg2;

@end

@interface Xcode3InstallsrcCommandLineVerb : IDEWorkspaceBasedCommandLineVerb
{
}

+ (int)performWithEnvironment:(id)arg1;
+ (id)optionDefinitionsWithEnvironment:(id)arg1;

@end

@interface Xcode3LocalizedIBDocumentAdaptor : IDELocalizedResourceAdaptor
{
    NSMutableDictionary *_stringsCache;
    NSDictionary *_baseStrings;
    NSDictionary *_commentsByKey;
}

+ (id)writeWorkForContext:(id)arg1 langauge:(id)arg2;
+ (id)readWorkForContext:(id)arg1;
+ (id)adaptedResourcesForPopulationContext:(id)arg1;
@property(retain) NSDictionary *commentsByKey; // @synthesize commentsByKey=_commentsByKey;
@property(retain) NSDictionary *baseStrings; // @synthesize baseStrings=_baseStrings;
- (void).cxx_destruct;
- (void)setStringsByKey:(id)arg1 forLanguage:(id)arg2;
- (id)stringsByKeyForLanguage:(id)arg1;
- (id)localizedGroupIdentifier;
- (id)initWithLocalizedContainer:(id)arg1 localizedGroup:(id)arg2;

@end

@interface Xcode3LocalizedIBDocumentAdaptorReadWorkContext : IDELocalizationWorkContext <IDELocalizationWorkReadStrings, IDELocalizationWorkSystemTask>
{
    DVTFilePath *IDELocalizationWork_path;
    NSDictionary *IDELocalizationWork_strings;
    NSDictionary *IDELocalizationWork_comments;
    DVTFilePath *IDELocalizationWork_launchPath;
    NSArray *IDELocalizationWork_arguments;
    NSNumber *IDELocalizationWork_exitStatus;
    Xcode3LocalizedIBDocumentAdaptor *_adaptor;
    IDEFileReference *_fileReference;
    DVTLocale *_language;
    NSString *_tempPath;
}

@property(retain) NSString *tempPath; // @synthesize tempPath=_tempPath;
@property(retain) DVTLocale *language; // @synthesize language=_language;
@property(retain) IDEFileReference *fileReference; // @synthesize fileReference=_fileReference;
@property(retain) Xcode3LocalizedIBDocumentAdaptor *adaptor; // @synthesize adaptor=_adaptor;
@property(retain) NSNumber *IDELocalizationWork_exitStatus; // @synthesize IDELocalizationWork_exitStatus;
@property(retain) NSArray *IDELocalizationWork_arguments; // @synthesize IDELocalizationWork_arguments;
@property(retain) DVTFilePath *IDELocalizationWork_launchPath; // @synthesize IDELocalizationWork_launchPath;
@property(retain) NSDictionary *IDELocalizationWork_comments; // @synthesize IDELocalizationWork_comments;
@property(retain) NSDictionary *IDELocalizationWork_strings; // @synthesize IDELocalizationWork_strings;
@property(retain) DVTFilePath *IDELocalizationWork_path; // @synthesize IDELocalizationWork_path;
- (void).cxx_destruct;
- (void)primitiveInvalidate;

@end

@interface Xcode3LocalizedIBDocumentAdaptorWriteWorkContext : IDELocalizationWorkContext <IDELocalizationWorkWriteStrings>
{
    BOOL IDELocalizationWork_createdNewSubitem;
    NSDictionary *IDELocalizationWork_strings;
    NSDictionary *IDELocalizationWork_comments;
    IDEContainer<IDELocalizedContainer> *IDELocalizationWork_container;
    IDEGroup<IDELocalizedGroup> *IDELocalizationWork_group;
    DVTLocale *IDELocalizationWork_language;
    DVTFilePath *IDELocalizationWork_path;
}

@property(retain) DVTFilePath *IDELocalizationWork_path; // @synthesize IDELocalizationWork_path;
@property BOOL IDELocalizationWork_createdNewSubitem; // @synthesize IDELocalizationWork_createdNewSubitem;
@property(retain) DVTLocale *IDELocalizationWork_language; // @synthesize IDELocalizationWork_language;
@property(retain) IDEGroup<IDELocalizedGroup> *IDELocalizationWork_group; // @synthesize IDELocalizationWork_group;
@property(retain) IDEContainer<IDELocalizedContainer> *IDELocalizationWork_container; // @synthesize IDELocalizationWork_container;
@property(retain) NSDictionary *IDELocalizationWork_comments; // @synthesize IDELocalizationWork_comments;
@property(retain) NSDictionary *IDELocalizationWork_strings; // @synthesize IDELocalizationWork_strings;
- (void).cxx_destruct;
- (void)primitiveInvalidate;

@end

@interface Xcode3LocalizedIndependentStringsAdaptor : IDELocalizedStringsAdaptor
{
    Xcode3Target *_target;
}

+ (id)adaptedResourcesForPopulationContext:(id)arg1;
- (void).cxx_destruct;
- (id)target;
- (id)localizedGroupIdentifier;
- (void)primitiveInvalidate;
- (id)initWithLocalizedContainer:(id)arg1 localizedGroup:(id)arg2 tableName:(id)arg3 baseStrings:(id)arg4 baseComments:(id)arg5 target:(id)arg6;

@end

@interface Xcode3LocalizedIndependentStringsAdaptorTargetWorkContext : IDELocalizationWorkContext <IDELocalizationWorkSystemTask>
{
    DVTFilePath *IDELocalizationWork_launchPath;
    NSArray *IDELocalizationWork_arguments;
    NSNumber *IDELocalizationWork_exitStatus;
    Xcode3Target *_target;
    NSArray *_sourcePaths;
    NSArray *_tableNames;
    NSString *_tempPath;
}

@property(retain) NSString *tempPath; // @synthesize tempPath=_tempPath;
@property(retain) NSArray *tableNames; // @synthesize tableNames=_tableNames;
@property(retain) NSArray *sourcePaths; // @synthesize sourcePaths=_sourcePaths;
@property(retain) Xcode3Target *target; // @synthesize target=_target;
@property(retain) NSNumber *IDELocalizationWork_exitStatus; // @synthesize IDELocalizationWork_exitStatus;
@property(retain) NSArray *IDELocalizationWork_arguments; // @synthesize IDELocalizationWork_arguments;
@property(retain) DVTFilePath *IDELocalizationWork_launchPath; // @synthesize IDELocalizationWork_launchPath;
- (void).cxx_destruct;
- (void)primitiveInvalidate;

@end

@interface Xcode3LocalizedInfoPlistAdaptor : IDELocalizedPlistAdaptor
{
    Xcode3Target *_target;
}

+ (id)adaptedResourcesForPopulationContext:(id)arg1;
- (void).cxx_destruct;
- (id)target;
- (id)expectedSuperitem;
- (id)expectedDirectoryPath;
- (id)expectedFileName;
- (id)filteredBaseStringsByKey:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithLocalizedContainer:(id)arg1 localizedGroup:(id)arg2 plistFileReference:(id)arg3 target:(id)arg4;

@end

@interface Xcode3LocalizedSourceStringsAdaptor : IDELocalizedStringsAdaptor
{
    Xcode3Target *_target;
}

+ (id)adaptedResourcesForPopulationContext:(id)arg1;
- (void).cxx_destruct;
- (id)target;
- (id)expectedSuperitem;
- (id)expectedDirectoryPath;
- (id)expectedFileName;
- (id)localizedGroupIdentifier;
- (void)primitiveInvalidate;
- (id)initWithLocalizedContainer:(id)arg1 localizedGroup:(id)arg2 tableName:(id)arg3 baseStrings:(id)arg4 baseComments:(id)arg5 target:(id)arg6;

@end

@interface Xcode3LocalizedSourceStringsAdaptorSourceWorkContext : IDELocalizationWorkContext <IDELocalizationWorkSystemTask>
{
    DVTFilePath *IDELocalizationWork_launchPath;
    NSArray *IDELocalizationWork_arguments;
    NSNumber *IDELocalizationWork_exitStatus;
    NSArray *_sourcePaths;
    NSString *_tempPath;
    NSArray *_readTableContexts;
}

@property(retain) NSArray *readTableContexts; // @synthesize readTableContexts=_readTableContexts;
@property(retain) NSString *tempPath; // @synthesize tempPath=_tempPath;
@property(retain) NSArray *sourcePaths; // @synthesize sourcePaths=_sourcePaths;
@property(retain) NSNumber *IDELocalizationWork_exitStatus; // @synthesize IDELocalizationWork_exitStatus;
@property(retain) NSArray *IDELocalizationWork_arguments; // @synthesize IDELocalizationWork_arguments;
@property(retain) DVTFilePath *IDELocalizationWork_launchPath; // @synthesize IDELocalizationWork_launchPath;
- (void).cxx_destruct;

@end

@interface Xcode3LocalizedSourceStringsAdaptorTableWorkContext : IDELocalizationWorkContext <IDELocalizationWorkReadStrings>
{
    DVTFilePath *IDELocalizationWork_path;
    NSDictionary *IDELocalizationWork_strings;
    NSDictionary *IDELocalizationWork_comments;
    NSString *_tableName;
}

@property(retain) NSString *tableName; // @synthesize tableName=_tableName;
@property(retain) NSDictionary *IDELocalizationWork_comments; // @synthesize IDELocalizationWork_comments;
@property(retain) NSDictionary *IDELocalizationWork_strings; // @synthesize IDELocalizationWork_strings;
@property(retain) DVTFilePath *IDELocalizationWork_path; // @synthesize IDELocalizationWork_path;
- (void).cxx_destruct;
- (void)primitiveInvalidate;

@end

@interface Xcode3LocalizedSourceStringsAdaptorTargetWorkContext : IDELocalizationWorkContext
{
    Xcode3Target *_target;
    NSArray *_files;
    NSMutableDictionary *_mergedStringsByTable;
    NSMutableDictionary *_mergedCommentsByTable;
}

@property(retain) NSMutableDictionary *mergedCommentsByTable; // @synthesize mergedCommentsByTable=_mergedCommentsByTable;
@property(retain) NSMutableDictionary *mergedStringsByTable; // @synthesize mergedStringsByTable=_mergedStringsByTable;
@property(retain) NSArray *files; // @synthesize files=_files;
@property(retain) Xcode3Target *target; // @synthesize target=_target;
- (void).cxx_destruct;
- (void)primitiveInvalidate;

@end

@interface Xcode3ProjectTemplate : IDETemplate <Xcode3ProjectTemplateUnitParent>
{
    NSArray *_units;
}

+ (id)additionalAvailableTemplatesOfTemplateKind:(id)arg1;
+ (void)addUnit:(id)arg1 fromUnits:(id)arg2 toDependencies:(id)arg3;
@property(readonly, copy) NSArray *units; // @synthesize units=_units;
- (void).cxx_destruct;
- (id)defaultCompletionName;
- (id)templateOptions;
- (long long)sortOrder;
- (id)templatePlatforms;
- (id)initWithTemplateInfo:(id)arg1 filePath:(id)arg2;
- (id)initWithUnits:(id)arg1 templateKind:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface Xcode3ProjectTemplateDefinition : NSObject
{
    NSString *_beginning;
    NSString *_end;
    long long _indent;
    NSString *_name;
    NSString *_path;
    DVTFilePath *_filePath;
    NSString *_pathType;
    NSString *_fileType;
    NSString *_textEncoding;
    NSString *_lineEnding;
    id _tabWidth;
    id _indentWidth;
    id _usesTabs;
    id _wrapsLines;
    NSArray *_group;
    NSArray *_targetIndices;
    NSArray *_targetIdentifiers;
    id _substituteMacros;
    NSArray *_groups;
    NSArray *_buildAttributes;
    long long _sortOrder;
}

@property long long sortOrder; // @synthesize sortOrder=_sortOrder;
@property(retain) id groups; // @synthesize groups=_groups;
@property(retain) id substituteMacros; // @synthesize substituteMacros=_substituteMacros;
@property(retain) NSArray *buildAttributes; // @synthesize buildAttributes=_buildAttributes;
@property(retain) NSArray *targetIdentifiers; // @synthesize targetIdentifiers=_targetIdentifiers;
@property(retain) NSArray *targetIndices; // @synthesize targetIndices=_targetIndices;
@property(copy) NSArray *group; // @synthesize group=_group;
@property(retain) id wrapsLines; // @synthesize wrapsLines=_wrapsLines;
@property(retain) id usesTabs; // @synthesize usesTabs=_usesTabs;
@property(retain) id indentWidth; // @synthesize indentWidth=_indentWidth;
@property(retain) id tabWidth; // @synthesize tabWidth=_tabWidth;
@property(copy) NSString *lineEnding; // @synthesize lineEnding=_lineEnding;
@property(copy) NSString *textEncoding; // @synthesize textEncoding=_textEncoding;
@property(copy) NSString *fileType; // @synthesize fileType=_fileType;
@property(copy) NSString *pathType; // @synthesize pathType=_pathType;
@property(copy) DVTFilePath *filePath; // @synthesize filePath=_filePath;
@property(copy) NSString *path; // @synthesize path=_path;
@property(copy) NSString *name; // @synthesize name=_name;
@property long long indent; // @synthesize indent=_indent;
@property(copy) NSString *end; // @synthesize end=_end;
@property(copy) NSString *beginning; // @synthesize beginning=_beginning;
- (void).cxx_destruct;
- (id)addFileReferenceToPath:(id)arg1 rootGroup:(id)arg2 targets:(id)arg3 basedOn:(id)arg4;
- (id)_targetWithIdentifier:(id)arg1 inProject:(id)arg2;
- (id)addFileReferenceForPath:(id)arg1 toGroup:(id)arg2 absolute:(BOOL)arg3;
- (void)applyPropertiesToReference:(id)arg1;
- (id)replacementTargetInTargets:(id)arg1;
- (BOOL)isAbsolutePathTypeInRootGroup:(id)arg1;
- (id)initWithPropertyList:(id)arg1 fromPath:(id)arg2 stringValueKey:(id)arg3;
- (id)init;

@end

@interface Xcode3ProjectTemplateDefinitionNode : NSObject
{
    Xcode3ProjectTemplateDefinitionNode *_wildcardNode;
    NSArray *_children;
    NSString *_name;
    NSString *_expansionString;
}

@property(copy) NSString *expansionString; // @synthesize expansionString=_expansionString;
@property(copy) NSString *name; // @synthesize name=_name;
@property(copy) NSArray *children; // @synthesize children=_children;
- (void).cxx_destruct;
- (id)description;
- (id)outputToFilePath:(id)arg1 withDefinitions:(id)arg2 indentString:(id)arg3 rootGroup:(id)arg4 targets:(id)arg5 basedOn:(id)arg6 targetName:(id)arg7 error:(id *)arg8 replacementHandler:(CDUnknownBlockType)arg9;
- (id)outputInDirectory:(id)arg1 withDefinitions:(id)arg2 indentString:(id)arg3 rootGroup:(id)arg4 targets:(id)arg5 basedOn:(id)arg6 error:(id *)arg7 replacementHandler:(CDUnknownBlockType)arg8;
- (BOOL)shouldProcessPath:(id)arg1;
- (void)addToString:(id)arg1 withPrefixNames:(id)arg2 definitions:(id)arg3 indent:(long long *)arg4 indentString:(id)arg5;
- (id)definitionForNames:(id)arg1 withDefinitions:(id)arg2;
@property(readonly) NSMutableArray *mutableChildren;
- (void)addNodeWithNames:(id)arg1;
- (id)nodeWithName:(id)arg1;
- (void)addChildNodes:(id)arg1;
- (struct _NSRange)rangeOfNextSeparatorInString:(id)arg1 range:(struct _NSRange)arg2;
- (struct _NSRange)rangeOfNextParenCloserInString:(id)arg1 range:(struct _NSRange)arg2;
- (struct _NSRange)rangeOfNextMacroCloserInString:(id)arg1 range:(struct _NSRange)arg2;
- (struct _NSRange)rangeOfNextSeparatorOrOpenerInString:(id)arg1 range:(struct _NSRange)arg2 foundScanType:(long long *)arg3;
- (id)init;

@end

@interface Xcode3ProjectTemplateFactory : IDETemplateFactory
{
}

+ (id)projectPathForDestinationPath:(id)arg1 instantiationContext:(id)arg2;
- (void)instantiateTemplateForContext:(id)arg1 options:(id)arg2 whenDone:(CDUnknownBlockType)arg3;
- (id)proposedFilePathsForContext:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)outputToContext:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (void)configureDefaultTeamForTarget:(id)arg1;
- (void)refreshTeams;
- (id)_targetWithTemplateIdentifier:(id)arg1 inTargets:(id)arg2;
- (id)macroEngineForProject:(id)arg1 options:(id)arg2;
- (id)indentString;
- (id)projectForProjectPath:(id)arg1 context:(id)arg2;
- (id)templateConfigurationName:(id)arg1 projectNames:(id)arg2 templateNames:(id)arg3;
- (void)addSettings:(id)arg1 toConfigurationNamed:(id)arg2 inList:(id)arg3;
- (id)normalizeSettingsDictionary:(id)arg1;
- (id)projectInGroup:(id)arg1;
- (id)projectForItem:(id)arg1;
- (BOOL)canInstantiateTemplateForContext:(id)arg1;
- (BOOL)validatePackageName:(id)arg1 context:(id)arg2 error:(id *)arg3;

@end

@interface Xcode3ProjectTemplateOption : IDETemplateOption
{
    NSDictionary *_units;
    NSString *_specialType;
}

+ (id)keyPathsForValuesAffectingHasValidValue;
+ (id)keyPathsForValuesAffectingValues;
+ (id)keyPathsForValuesAffectingDisplayValues;
+ (id)allowedTemplateOptionTypes;
@property(copy) NSDictionary *units; // @synthesize units=_units;
- (void).cxx_destruct;
- (id)prefix;
- (void)setPrefix:(id)arg1;
@property __weak id <Xcode3ProjectTemplateOptionParent> parent;
- (id)values;
- (id)displayValues;
- (void)updateEnabledWithOptions:(id)arg1;
- (void)addToNode:(id)arg1 andDefinitions:(id)arg2 withOptions:(id)arg3 components:(id)arg4 project:(id)arg5 targets:(id)arg6 executables:(id)arg7 macros:(id)arg8 replacementHandler:(CDUnknownBlockType)arg9;
- (id)effectiveValueWithOptions:(id)arg1;
- (id)initWithOptionInfo:(id)arg1 filePath:(id)arg2;

@end

@interface Xcode3ProjectTemplateUnit : IDETemplate <Xcode3ProjectTemplateOptionParent>
{
    NSArray *_ancestorNames;
    NSArray *_componentDictionaries;
    NSDictionary *_definitions;
    NSDictionary *_requiredOptions;
    NSArray *_targets;
    NSArray *_executables;
    BOOL _concrete;
    BOOL _projectOnly;
    BOOL _targetOnly;
    BOOL _wantsAssociatedTarget;
    BOOL _associatedTargetIsRequired;
    BOOL _associatedTargetIsTargetToBeTested;
    BOOL _associatedTargetIsDependent;
    BOOL _associatedTargetNeedsProductBuildPhaseInjection;
    id <Xcode3ProjectTemplateUnitParent> _parent;
    NSString *_identifier;
    NSArray *_nodes;
    NSDictionary *_macros;
    NSDictionary *_project;
    NSArray *_associatedTargetAllowableProductTypes;
    NSArray *_associatedTargetAllowablePlatforms;
    NSString *_associatedTargetPopUpTitle;
    NSString *_associatedTargetPopUpDescription;
    NSArray *_optionConstraints;
    NSArray *_injectionTargetNames;
}

@property(readonly) NSArray *injectionTargetNames; // @synthesize injectionTargetNames=_injectionTargetNames;
@property(readonly) NSArray *optionConstraints; // @synthesize optionConstraints=_optionConstraints;
@property(readonly) NSString *associatedTargetPopUpDescription; // @synthesize associatedTargetPopUpDescription=_associatedTargetPopUpDescription;
@property(readonly) NSString *associatedTargetPopUpTitle; // @synthesize associatedTargetPopUpTitle=_associatedTargetPopUpTitle;
@property(readonly) BOOL associatedTargetNeedsProductBuildPhaseInjection; // @synthesize associatedTargetNeedsProductBuildPhaseInjection=_associatedTargetNeedsProductBuildPhaseInjection;
@property(readonly) BOOL associatedTargetIsDependent; // @synthesize associatedTargetIsDependent=_associatedTargetIsDependent;
@property(readonly) BOOL associatedTargetIsTargetToBeTested; // @synthesize associatedTargetIsTargetToBeTested=_associatedTargetIsTargetToBeTested;
@property(readonly) BOOL associatedTargetIsRequired; // @synthesize associatedTargetIsRequired=_associatedTargetIsRequired;
@property(readonly) NSArray *associatedTargetAllowablePlatforms; // @synthesize associatedTargetAllowablePlatforms=_associatedTargetAllowablePlatforms;
@property(readonly) NSArray *associatedTargetAllowableProductTypes; // @synthesize associatedTargetAllowableProductTypes=_associatedTargetAllowableProductTypes;
@property(readonly) BOOL wantsAssociatedTarget; // @synthesize wantsAssociatedTarget=_wantsAssociatedTarget;
@property(readonly, getter=isTargetOnly) BOOL targetOnly; // @synthesize targetOnly=_targetOnly;
@property(readonly, getter=isProjectOnly) BOOL projectOnly; // @synthesize projectOnly=_projectOnly;
@property(readonly, getter=isConcrete) BOOL concrete; // @synthesize concrete=_concrete;
@property(readonly) NSDictionary *project; // @synthesize project=_project;
@property(readonly, copy) NSDictionary *macros; // @synthesize macros=_macros;
@property(readonly, copy) NSArray *nodes; // @synthesize nodes=_nodes;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
@property __weak id <Xcode3ProjectTemplateUnitParent> parent; // @synthesize parent=_parent;
- (void).cxx_destruct;
- (void)valueDidChangeForOption:(id)arg1;
- (void)addToNode:(id)arg1 andDefinitions:(id)arg2 withOptions:(id)arg3 components:(id)arg4 project:(id)arg5 targets:(id)arg6 executables:(id)arg7 macros:(id)arg8 replacementHandler:(CDUnknownBlockType)arg9;
- (void)mergeSettingsDictionary:(id)arg1 intoDictionary:(id)arg2 replacementHandler:(CDUnknownBlockType)arg3;
@property(readonly) unsigned long long numberOfComponents;
- (BOOL)isUsableWithOptions:(id)arg1;
- (id)injectionsFromUnits:(id)arg1;
- (id)ancestorsFromUnits:(id)arg1;
- (id)fallbackTemplateIcon;
- (Class)templateOptionClass;
- (id)initWithTemplateInfo:(id)arg1 filePath:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface Xcode3SourceTrees : NSObject <IDESourceTreeProvider>
{
}

+ (id)stringByExpandingSourceTreeReferencesInString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface Xcode3TargetPortalEntitlementsCoordinatorMacPlatform : NSObject <IDEPortalEntitlementsCoordinatorPlatform>
{
    id <IDECapabilitiesContextProviding> _capabilitiesContext;
}

@property(retain, nonatomic) id <IDECapabilitiesContextProviding> capabilitiesContext; // @synthesize capabilitiesContext=_capabilitiesContext;
- (void).cxx_destruct;
- (id)willRequestProfileWithFeatures:(id)arg1 usingWildcardAppID:(BOOL)arg2;
- (id)didReadProfileFeatures:(id)arg1;
- (id)initWithCapabilitiesContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface _Xcode3CommandLineProjectCreationErrorHandler : NSObject <Xcode3ProjectCreationErrorHandling>
{
    BOOL _didEncounterFatalError;
    NSString *_errorMessage;
}

@property(copy) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property BOOL didEncounterFatalError; // @synthesize didEncounterFatalError=_didEncounterFatalError;
- (void).cxx_destruct;
- (BOOL)shouldOpenProjectReadOnlyAtPath:(id)arg1;
- (void)unableToOpenProjectAtPath:(id)arg1 reason:(id)arg2;
- (BOOL)shouldOpenProjectOfMismatchingVersion:(unsigned long long)arg1 atPath:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

