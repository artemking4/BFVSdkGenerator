// Object: VideoRecorderEntityData
// ClassId: 3882
// RuntimeId: 53254
// TypeInfo: 0x0000000144C1D480
#include "../Entity/EntityData.h"
#include "../Global/CString.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Casablanca {
    class VideoRecorderEntityData : public Entity::EntityData {
        CString FileName; // 0x20
        Float32 SecondsStartTime; // 0x28
        Float32 SecondsDurationTime; // 0x2C
    }; // 0x30
    static_assert(sizeof(VideoRecorderEntityData) == 0x30);
}
#pragma pack(pop)