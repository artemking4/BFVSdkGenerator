// Object: PrivateGamesMutatorTranslatorEntityData
// ClassId: 3045
// RuntimeId: 30057
// TypeInfo: 0x0000000144D655F0
#include "../Entity/EntityData.h"
#include "../CasablancaShared/PrivateGamesBlueprint.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class PrivateGamesMutatorTranslatorEntityData : public Entity::EntityData {
        CasablancaShared::PrivateGamesBlueprint Blueprint; // 0x20
        CString MutatorName; // 0x28
    }; // 0x30
    static_assert(sizeof(PrivateGamesMutatorTranslatorEntityData) == 0x30);
}
#pragma pack(pop)