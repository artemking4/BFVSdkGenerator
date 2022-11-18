// Object: FlapComponentData
// ClassId: 1729
// RuntimeId: 14587
// TypeInfo: 0x0000000144F70A00
#include "../Entity/BoneComponentData.h"
#include "../GameShared/RotationAxisEnum.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace VehicleShared {
    class FlapComponentData : public Entity::BoneComponentData {
        GameShared::RotationAxisEnum RotationAxis; // 0x80
        Float32 RotationScale; // 0x84
        char pad_0x88[0x8];
    }; // 0x90
    static_assert(sizeof(FlapComponentData) == 0x90);
}
#pragma pack(pop)