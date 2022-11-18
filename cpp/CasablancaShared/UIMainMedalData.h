// Object: UIMainMedalData
// ClassId: 5464
// RuntimeId: 55626
// TypeInfo: 0x0000000144D5F3E0
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/UIStageMedalData.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIMainMedalData : public Core::DataContainer {
        CString Name; // 0x18
        CString AwardCode; // 0x20
        Int32 MedalProgression; // 0x28
        Int32 MedalScore; // 0x2C
        Int32 TimesCompleted; // 0x30
        Int32 NumMedalStages; // 0x34
        Array<CasablancaShared::UIStageMedalData> StageMedals; // 0x38
        Boolean IsCompleted; // 0x40
        char pad_0x41[0x7];
    }; // 0x48
    static_assert(sizeof(UIMainMedalData) == 0x48);
}
#pragma pack(pop)