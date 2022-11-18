// Object: TypeInfoParameterDataContainer
// ClassId: 5377
// RuntimeId: 25293
// TypeInfo: 0x0000000144BE9870
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Core/TypeInfoRef.h"
#include "../Global/Boolean.h"
#include "../Core/TypeInfoParameterQualifier.h"

#pragma pack(push, 8)
namespace Core {
    class TypeInfoParameterDataContainer : public Core::DataContainer {
        Core::TypeInfoRef TypeRef; // 0x18
        CString Name; // 0x28
        Core::TypeInfoParameterQualifier Qualifier; // 0x30
        char pad_0x34[0x4];
        Core::DataContainer DefaultValue; // 0x38
        Boolean IsArray; // 0x40
        char pad_0x41[0x7];
    }; // 0x48
    static_assert(sizeof(TypeInfoParameterDataContainer) == 0x48);
}
#pragma pack(pop)