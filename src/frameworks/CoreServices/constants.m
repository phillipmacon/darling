#include <CoreFoundation/CoreFoundation.h>

const CFStringRef kUTTagClassDeviceModelCode = CFSTR("com.apple.device-model-code");
const CFStringRef kUTTagClassFilenameExtension = CFSTR("public.filename-extension");
const CFStringRef kUTTagClassMIMEType = CFSTR("public.mime-type");
const CFStringRef kUTTypeDevice = CFSTR("public.device");
const CFStringRef kUTTypeData = CFSTR("public.data");
const CFStringRef kUTTypeGIF = CFSTR("com.compuserve.gif");
const CFStringRef kUTTypeJPEG = CFSTR("public.jpeg");
const CFStringRef kUTTypePNG = CFSTR("kUTTypePNG");
const CFStringRef kUTTypePlainText = CFSTR("public.plain-text");
const CFStringRef kUTTypeTIFF = CFSTR("public.tiff");
const CFStringRef kUTTypeXMLPropertyList = CFSTR("com.apple.xml-property-list");
const CFStringRef kUTTypeZipArchive = CFSTR("public.zip-archive");
const CFStringRef kUTTypeAppleICNS = CFSTR("com.apple.icns");
const CFStringRef kUTTypeFileURL = CFSTR("public.file-url");
const CFStringRef kUTTypeCHeader = CFSTR("public.c-header");
const CFStringRef kUTTypeCPlusPlusHeader = CFSTR("public.c-plus-plus-header");
const CFStringRef kUTTypeCPlusPlusSource = CFSTR("public.c-plus-plus-source");
const CFStringRef kUTTypeCSource = CFSTR("public.c-source");
const CFStringRef kUTTypeFolder = CFSTR("public.folder");
const CFStringRef kUTTypeObjectiveCPlusPlusSource = CFSTR("public.objective-c-plus-plus-source");
const CFStringRef kUTTypeObjectiveCSource = CFSTR("public.objective-c-source");
const CFStringRef kUTTypeTagSpecificationKey = CFSTR("UTTypeTagSpecification");
const CFStringRef kUTTypePDF = CFSTR("com.adobe.pdf");
const CFStringRef kUTTypeSourceCode = CFSTR("public.source-code");
const CFStringRef kUTTypeSwiftSource = CFSTR("public.swift-source");
const CFStringRef kUTTypeText = CFSTR("public.text");
const CFStringRef kUTTypeFramework = CFSTR("com.apple.framework");
const CFStringRef kUTTypeImage = CFSTR("public.image");
const CFStringRef kUTTypeUTF8PlainText = CFSTR("public.utf8-plain-text");
const CFStringRef kUTTypeApplication = CFSTR("com.apple.application");
const CFStringRef kUTTypeBundle = CFSTR("com.apple.bundle");
const CFStringRef kUTTypeHTML = CFSTR("public.html");
const CFStringRef kUTTypePICT = CFSTR("com.apple.pict");
const CFStringRef kUTTypeUTF16ExternalPlainText = CFSTR("public.utf16-external-plain-text");
const CFStringRef kUTTypeUTF16PlainText = CFSTR("public.utf16-plain-text");

/* re-exported from LaunchServices */
const CFStringRef _kLSPIDKey = CFSTR("pid");
const CFStringRef _kLSASNKey = CFSTR("LSASN");
const CFStringRef _kLSApplicationTypeKey = CFSTR("ApplicationType");
const CFStringRef _kLSApplicationUIElementTypeKey = CFSTR("UIElement");
const CFStringRef _kLSPreviousASNKey = CFSTR("LSOtherASN");
const CFStringRef _kLSBundlePathDeviceIDKey = CFSTR("LSBundlePathDeviceIDKey");
const CFStringRef _kLSBundlePathINodeKey = CFSTR("LSBundlePatINodeKey");

const CFStringRef kLSQuarantineAgentBundleIdentifierKey = CFSTR("LSQuarantineAgentBundleIdentifier");
const CFStringRef kLSQuarantineAgentNameKey = CFSTR("LSQuarantineAgentName");
const CFStringRef kLSQuarantineDataURLKey = CFSTR("LSQuarantineDataURL");
const CFStringRef kLSQuarantineOriginURLKey = CFSTR("LSQuarantineOriginURL");
const CFStringRef kLSQuarantineTimeStampKey = CFSTR("LSQuarantineTimeStamp");
const CFStringRef kLSQuarantineTypeKey = CFSTR("LSQuarantineType");
const CFStringRef kLSQuarantineTypeOtherDownload = CFSTR("LSQuarantineTypeOtherDownload");

const CFStringRef kMDItemDisplayName = CFSTR("kMDItemDisplayName");
const CFStringRef kMDItemLastUsedDate = CFSTR("kMDItemLastUsedDate");
const CFStringRef kMDItemFinderComment = CFSTR("kMDItemFinderComment");

const CFStringRef kFSOperationBytesCompleteKey = CFSTR("kFSOperationBytesDoneKey");
const CFStringRef kFSOperationTotalBytesKey = CFSTR("kFSOperationTotalBytesKey");
