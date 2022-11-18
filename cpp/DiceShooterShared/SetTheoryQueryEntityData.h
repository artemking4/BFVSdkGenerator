// Object: SetTheoryQueryEntityData
// ClassId: 3199
// RuntimeId: 15297
// TypeInfo: 0x0000000144DF19D0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../DiceShooterShared/QueryEntityResult.h"
#include "../DiceShooterShared/SetTheoryOperation.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class SetTheoryQueryEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        DiceShooterShared::QueryEntityResult Input1; // 0x28
        DiceShooterShared::QueryEntityResult Input2; // 0x38
        DiceShooterShared::SetTheoryOperation Operation; // 0x48
        Boolean UpdateOnInput1Change; // 0x4C
        Boolean UpdateOnInput2Change; // 0x4D
        char pad_0x4E[0x2];
    }; // 0x50
    static_assert(sizeof(SetTheoryQueryEntityData) == 0x50);
}
#pragma pack(pop)