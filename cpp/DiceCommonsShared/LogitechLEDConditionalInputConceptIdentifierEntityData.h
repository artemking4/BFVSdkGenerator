// Object: LogitechLEDConditionalInputConceptIdentifierEntityData
// ClassId: 2855
// RuntimeId: 24097
// TypeInfo: 0x0000000144DBF630
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../Core/Vec3.h"
#include "../GameShared/InputConceptIdentifiers.h"

#pragma pack(push, 16)
namespace DiceCommonsShared {
    class LogitechLEDConditionalInputConceptIdentifierEntityData : public Entity::EntityData {
        Array<GameShared::InputConceptIdentifiers> InputConceptIdentifiers; // 0x20
        char pad_0x28[0x8];
        Core::Vec3 ConditionTrueColor; // 0x30
        Core::Vec3 ConditionFalseColor; // 0x40
        Boolean Enabled; // 0x50
        Boolean ColorCondition; // 0x51
        char pad_0x52[0xE];
    }; // 0x60
    static_assert(sizeof(LogitechLEDConditionalInputConceptIdentifierEntityData) == 0x60);
}
#pragma pack(pop)