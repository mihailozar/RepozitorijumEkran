#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

Model::Model() : modelListener(0)
{

}

void Model::tick()
{
	modelListener->notifyState();
		//SAMPLING AT 1HZ
		if(cnt++ % 10 == 0) {
			modelListener->notifyHV();
			modelListener->notifyLV();
		}

//		modelListener->notifyHVFaults();
//		modelListener->notifyLVFaults();
}
