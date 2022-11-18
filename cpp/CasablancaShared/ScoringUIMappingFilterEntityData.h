// Object: ScoringUIMappingFilterEntityData
// ClassId: 3144
// RuntimeId: 27483
// TypeInfo: 0x0000000144D13300
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/ScoringUIMappingElement.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ScoringUIMappingFilterEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::ScoringUIMappingElement ScoringUIMappingElement; // 0x28
        Boolean TriggerOnPropertyChanged; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(ScoringUIMappingFilterEntityData) == 0x38);
}
#pragma pack(pop)