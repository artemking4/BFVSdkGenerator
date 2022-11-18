// Object: InputBinding
// ClassId: 4160
// RuntimeId: 31206
// TypeInfo: 0x0000000144BEB220
#include "../Core/DataContainer.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace App {
    class InputBinding : public Core::DataContainer {
        CString InputGesture; // 0x18
        CString CommandUri; // 0x20
    }; // 0x28
    static_assert(sizeof(InputBinding) == 0x28);
}
#pragma pack(pop)