// Object: LanguageCollectionElement
// ClassId: 4203
// RuntimeId: 54448
// TypeInfo: 0x0000000144DC1C80
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../UIIncubatorShared/LocalizedStringId.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class LanguageCollectionElement : public Core::DataContainer {
        CString Language; // 0x18
        UIIncubatorShared::LocalizedStringId LanguageStringId; // 0x20
    }; // 0x28
    static_assert(sizeof(LanguageCollectionElement) == 0x28);
}
#pragma pack(pop)