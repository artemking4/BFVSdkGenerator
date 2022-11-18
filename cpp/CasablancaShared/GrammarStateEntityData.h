// Object: GrammarStateEntityData
// ClassId: 2789
// RuntimeId: 8661
// TypeInfo: 0x0000000144D28AA0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/NuiSpeechGrammarAsset.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class GrammarStateEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::NuiSpeechGrammarAsset Grammar; // 0x28
        Boolean StartEnabled; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(GrammarStateEntityData) == 0x38);
}
#pragma pack(pop)