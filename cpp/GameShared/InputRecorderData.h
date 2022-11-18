// Object: InputRecorderData
// ClassId: 4168
// RuntimeId: 7069
// TypeInfo: 0x0000000144E8F560
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace GameShared {
    class InputRecorderData : public Core::DataContainer {
        CString FileNamePrefix; // 0x18
        CString FileName; // 0x20
        Int32 ToggleRecordAction; // 0x28
        Boolean AutoIncrementFileName; // 0x2C
        char pad_0x2D[0x3];
    }; // 0x30
    static_assert(sizeof(InputRecorderData) == 0x30);
}
#pragma pack(pop)