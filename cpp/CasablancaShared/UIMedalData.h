// Object: UIMedalData
// ClassId: 5467
// RuntimeId: 34900
// TypeInfo: 0x0000000144D5F2E0
#include "../Core/DataContainer.h"
#include "../CasablancaShared/UIMainMedalData.h"
#include "../CasablancaShared/UIMedalTimeToReset.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIMedalData : public Core::DataContainer {
        Array<CasablancaShared::UIMainMedalData> MainMedals; // 0x18
        CasablancaShared::UIMedalTimeToReset TimeToReset; // 0x20
        Boolean TimeLeftToReset; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(UIMedalData) == 0x30);
}
#pragma pack(pop)