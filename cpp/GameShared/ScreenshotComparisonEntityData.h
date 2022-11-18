// Object: ScreenshotComparisonEntityData
// ClassId: 3145
// RuntimeId: 50808
// TypeInfo: 0x0000000144E8FCE0
#include "../Entity/EntityData.h"
#include "../Global/Int32.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace GameShared {
    class ScreenshotComparisonEntityData : public Entity::EntityData {
        Int32 AllowedDiffPercentage; // 0x20
        char pad_0x24[0x4];
        CString ScreenshotName; // 0x28
        Uint32 WaitFrames; // 0x30
        Boolean WaitForStreaming; // 0x34
        Boolean EnableDebugRendering; // 0x35
        char pad_0x36[0x2];
    }; // 0x38
    static_assert(sizeof(ScreenshotComparisonEntityData) == 0x38);
}
#pragma pack(pop)