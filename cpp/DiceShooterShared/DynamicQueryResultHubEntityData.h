// Object: DynamicQueryResultHubEntityData
// ClassId: 2678
// RuntimeId: 43204
// TypeInfo: 0x0000000144DE4D70
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Int32.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class DynamicQueryResultHubEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Int32 InputSelect; // 0x24
        Array<Uint32> HashedInput; // 0x28
    }; // 0x30
    static_assert(sizeof(DynamicQueryResultHubEntityData) == 0x30);
}
#pragma pack(pop)