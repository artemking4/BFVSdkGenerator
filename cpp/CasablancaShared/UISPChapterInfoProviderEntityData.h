// Object: UISPChapterInfoProviderEntityData
// ClassId: 3754
// RuntimeId: 58866
// TypeInfo: 0x0000000144D1FEF0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Int32.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class UISPChapterInfoProviderEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::LinearTransform Episode1Chapter1Transform; // 0x30
        Core::LinearTransform Episode1Chapter2Transform; // 0x70
        Core::LinearTransform Episode1Chapter3Transform; // 0xB0
        Core::LinearTransform Episode1Chapter4Transform; // 0xF0
        Core::LinearTransform Episode2Chapter1Transform; // 0x130
        Core::LinearTransform Episode2Chapter2Transform; // 0x170
        Core::LinearTransform Episode2Chapter3Transform; // 0x1B0
        Core::LinearTransform Episode2Chapter4Transform; // 0x1F0
        Core::LinearTransform Episode3Chapter1Transform; // 0x230
        Core::LinearTransform Episode3Chapter2Transform; // 0x270
        Core::LinearTransform Episode3Chapter3Transform; // 0x2B0
        Core::LinearTransform Episode3Chapter4Transform; // 0x2F0
        Core::LinearTransform Episode4Chapter1Transform; // 0x330
        Core::LinearTransform Episode4Chapter2Transform; // 0x370
        Core::LinearTransform Episode4Chapter3Transform; // 0x3B0
        Core::LinearTransform Episode4Chapter4Transform; // 0x3F0
        Core::LinearTransform Episode5Chapter1Transform; // 0x430
        Core::LinearTransform Episode5Chapter2Transform; // 0x470
        Core::LinearTransform Episode5Chapter3Transform; // 0x4B0
        Core::LinearTransform Episode5Chapter4Transform; // 0x4F0
        Core::LinearTransform Episode6Chapter1Transform; // 0x530
        Core::LinearTransform Episode6Chapter2Transform; // 0x570
        Core::LinearTransform Episode6Chapter3Transform; // 0x5B0
        Core::LinearTransform Episode6Chapter4Transform; // 0x5F0
        Core::LinearTransform PrologueChapter1Transform; // 0x630
        Core::LinearTransform PrologueChapter2Transform; // 0x670
        Core::LinearTransform PrologueChapter3Transform; // 0x6B0
        Core::LinearTransform PrologueChapter4Transform; // 0x6F0
        Int32 EpisodeIndex; // 0x730
        char pad_0x734[0xC];
    }; // 0x740
    static_assert(sizeof(UISPChapterInfoProviderEntityData) == 0x740);
}
#pragma pack(pop)