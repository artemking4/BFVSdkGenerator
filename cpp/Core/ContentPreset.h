// Object: ContentPreset
// ClassId: 1428
// RuntimeId: 49383
// TypeInfo: 0x0000000144BE8370
#include "../Core/DataContainer.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Core {
    class ContentPreset : public Core::DataContainer {
        CString ContentName; // 0x18
        CString ContentType; // 0x20
        Core::DataContainer ContentParameters; // 0x28
    }; // 0x30
    static_assert(sizeof(ContentPreset) == 0x30);
}
#pragma pack(pop)