// Object: UIStringBuilderEntityData
// ClassId: 3775
// RuntimeId: 11756
// TypeInfo: 0x0000000144D21870
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/UIStringBuilderEntry.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIStringBuilderEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        Array<CasablancaShared::UIStringBuilderEntry> Entries; // 0x28
        Boolean UseEntriesAsLocalizationParameters; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(UIStringBuilderEntityData) == 0x38);
}
#pragma pack(pop)