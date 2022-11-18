// Object: AffectorReceiveEntityData
// ClassId: 2030
// RuntimeId: 65127
// TypeInfo: 0x0000000144DF36F0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../DiceShooterShared/AffectorReceiveType.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class AffectorReceiveEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        DiceShooterShared::AffectorReceiveType ListenToType; // 0x24
        Uint32 AffectorListenToId; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(AffectorReceiveEntityData) == 0x30);
}
#pragma pack(pop)