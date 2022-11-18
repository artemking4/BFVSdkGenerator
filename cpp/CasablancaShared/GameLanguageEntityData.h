// Object: GameLanguageEntityData
// ClassId: 2776
// RuntimeId: 26527
// TypeInfo: 0x0000000144D1FA70
#include "../Entity/EntityData.h"
#include "../Core/LanguageFormat.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class GameLanguageEntityData : public Entity::EntityData {
        Array<Core::LanguageFormat> Languages; // 0x20
    }; // 0x28
    static_assert(sizeof(GameLanguageEntityData) == 0x28);
}
#pragma pack(pop)