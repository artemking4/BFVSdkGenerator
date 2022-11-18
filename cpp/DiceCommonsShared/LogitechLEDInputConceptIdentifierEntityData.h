// Object: LogitechLEDInputConceptIdentifierEntityData
// ClassId: 2863
// RuntimeId: 13719
// TypeInfo: 0x0000000144DBF5B0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../Core/Vec3.h"
#include "../GameShared/InputConceptIdentifiers.h"

#pragma pack(push, 16)
namespace DiceCommonsShared {
    class LogitechLEDInputConceptIdentifierEntityData : public Entity::EntityData {
        Array<GameShared::InputConceptIdentifiers> InputConceptIdentifiers; // 0x20
        char pad_0x28[0x8];
        Core::Vec3 Color; // 0x30
        Boolean Enabled; // 0x40
        char pad_0x41[0xF];
    }; // 0x50
    static_assert(sizeof(LogitechLEDInputConceptIdentifierEntityData) == 0x50);
}
#pragma pack(pop)