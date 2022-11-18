// Object: LocalizedString
// ClassId: 4233
// RuntimeId: 32896
// TypeInfo: 0x0000000144F6E540
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../UIIncubatorShared/LocalizedStringEncoding.h"

#pragma pack(push, 8)
namespace UIIncubatorShared {
    class LocalizedString : public Core::DataContainer {
        CString String; // 0x18
        UIIncubatorShared::LocalizedStringEncoding Encoding; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(LocalizedString) == 0x28);
}
#pragma pack(pop)