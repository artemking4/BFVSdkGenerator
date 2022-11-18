// Object: AimAssistCollisionBoneData
// ClassId: 99
// RuntimeId: 30938
// TypeInfo: 0x0000000144E82640
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"
#include "../GameShared/AimAssistCollisionBoneSnapAimData.h"

#pragma pack(push, 8)
namespace GameShared {
    class AimAssistCollisionBoneData : public Core::DataContainer {
        Float32 LengthScale; // 0x18
        GameShared::AimAssistCollisionBoneSnapAimData SnapAim; // 0x1C
    }; // 0x40
    static_assert(sizeof(AimAssistCollisionBoneData) == 0x40);
}
#pragma pack(pop)