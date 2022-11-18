// Object: InputSet
// ClassId: 4173
// RuntimeId: 3650
// TypeInfo: 0x0000000144BEB1A0
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../App/InputBinding.h"

#pragma pack(push, 8)
namespace App {
    class InputSet : public Core::DataContainer {
        CString ConfigurationKey; // 0x18
        Array<App::InputBinding> Bindings; // 0x20
    }; // 0x28
    static_assert(sizeof(InputSet) == 0x28);
}
#pragma pack(pop)