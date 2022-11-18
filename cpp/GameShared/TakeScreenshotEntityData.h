// Object: TakeScreenshotEntityData
// ClassId: 3547
// RuntimeId: 44594
// TypeInfo: 0x0000000144E8FC60
#include "../Entity/EntityData.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace GameShared {
    class TakeScreenshotEntityData : public Entity::EntityData {
        CString ScreenshotName; // 0x20
        Uint32 WaitFrames; // 0x28
        Boolean WaitForStreaming; // 0x2C
        Boolean OverwriteFile; // 0x2D
        Boolean AlphaEnable; // 0x2E
        Boolean EnableDebugRendering; // 0x2F
    }; // 0x30
    static_assert(sizeof(TakeScreenshotEntityData) == 0x30);
}
#pragma pack(pop)