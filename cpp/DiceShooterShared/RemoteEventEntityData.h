// Object: RemoteEventEntityData
// ClassId: 3106
// RuntimeId: 26344
// TypeInfo: 0x0000000144DECEA0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Uint32.h"
#include "../Global/Int32.h"
#include "../DiceShooterShared/RemotePropertyDefinition.h"
#include "../DiceShooterShared/QueryEntityResult.h"
#include "../Global/Boolean.h"

namespace DiceShooterShared {
    class RemoteEventEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        DiceShooterShared::QueryEntityResult PlayerTarget; // 0x28
        Uint32 TypeAssetId; // 0x38
        char pad_0x3C[0x4];
        Array<Int32> EventIds; // 0x40
        Array<DiceShooterShared::RemotePropertyDefinition> RemoteProperties; // 0x48
        Boolean FilterOnPlayer; // 0x50
        char pad_0x51[0x7];
    }; // 0x58
    static_assert(sizeof(RemoteEventEntityData) == 0x58);
}