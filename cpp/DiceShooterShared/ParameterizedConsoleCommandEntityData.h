// Object: ParameterizedConsoleCommandEntityData
// ClassId: 2930
// RuntimeId: 53466
// TypeInfo: 0x0000000144DEDEA0
#include "../Entity/EntityData.h"
#include "../Global/CString.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class ParameterizedConsoleCommandEntityData : public Entity::EntityData {
        CString Command; // 0x20
        Core::Realm Realm; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(ParameterizedConsoleCommandEntityData) == 0x30);
}
#pragma pack(pop)