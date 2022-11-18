// Object: CharacterStateRequestEntityData
// ClassId: 2468
// RuntimeId: 26374
// TypeInfo: 0x0000000144DE8190
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../DiceShooterShared/CharacterStateRequestDataBase.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"
#include "../DiceShooterShared/QueryEntityResult.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class CharacterStateRequestEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        DiceShooterShared::QueryEntityResult Query; // 0x28
        DiceShooterShared::CharacterStateRequestDataBase Request; // 0x38
        Int32 InputHash; // 0x40
        Boolean UseQuery; // 0x44
        Boolean Immediate; // 0x45
        Boolean Dummy; // 0x46
        char pad_0x47[0x1];
    }; // 0x48
    static_assert(sizeof(CharacterStateRequestEntityData) == 0x48);
}
#pragma pack(pop)