// Object: SyncedFloatArrayEntityData
// ClassId: 3538
// RuntimeId: 11893
// TypeInfo: 0x0000000144C32470
#include "../Entity/EntityData.h"
#include "../Global/Float32.h"
#include "../Network/SyncedFloatPrecision.h"
#include "../Casablanca/FloatArray.h"

#pragma pack(push, 8)
namespace Casablanca {
    class SyncedFloatArrayEntityData : public Entity::EntityData {
        Float32 Max; // 0x20
        Network::SyncedFloatPrecision Precision; // 0x24
        Casablanca::FloatArray In; // 0x28
    }; // 0x30
    static_assert(sizeof(SyncedFloatArrayEntityData) == 0x30);
}
#pragma pack(pop)