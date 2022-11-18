// Object: LanguageCollection
// ClassId: 4202
// RuntimeId: 30194
// TypeInfo: 0x0000000144DC1C00
#include "../Core/DataContainer.h"
#include "../DiceCommonsShared/LanguageCollectionElement.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class LanguageCollection : public Core::DataContainer {
        Array<DiceCommonsShared::LanguageCollectionElement> LanguagesString; // 0x18
    }; // 0x20
    static_assert(sizeof(LanguageCollection) == 0x20);
}
#pragma pack(pop)