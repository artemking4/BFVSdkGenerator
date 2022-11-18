// Object: BFSpectatorTakeScreenshotEntityData
// ClassId: 3548
// RuntimeId: 57691
// TypeInfo: 0x0000000144D42250
#include "../GameShared/TakeScreenshotEntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFSpectatorTakeScreenshotEntityData : public GameShared::TakeScreenshotEntityData {
        Int32 ResolutionMultiplier; // 0x30
        Int32 AntiAliasMultiplier; // 0x34
        Int32 ImageFormat; // 0x38
        Boolean UseNativeFileSystem; // 0x3C
        Boolean UseSurroundCapture; // 0x3D
        Boolean AddLayerNameToScreenshotFilename; // 0x3E
        Boolean CaptureResolutionScale; // 0x3F
    }; // 0x40
    static_assert(sizeof(BFSpectatorTakeScreenshotEntityData) == 0x40);
}
#pragma pack(pop)