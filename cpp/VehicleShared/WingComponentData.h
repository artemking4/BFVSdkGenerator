// Object: WingComponentData
// ClassId: 1733
// RuntimeId: 30006
// TypeInfo: 0x0000000144F70A80
#include "../Entity/BoneComponentData.h"
#include "../GameShared/WingPhysicsData.h"
#include "../Global/Int32.h"

#pragma pack(push, 16)
namespace VehicleShared {
    class WingComponentData : public Entity::BoneComponentData {
        Array<GameShared::WingPhysicsData> ConfigList; // 0x80
        Int32 UseAlternateConfig; // 0x88
        char pad_0x8C[0x4];
    }; // 0x90
    static_assert(sizeof(WingComponentData) == 0x90);
}
#pragma pack(pop)