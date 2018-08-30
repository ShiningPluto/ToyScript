#pragma once

#include "ToyScript/Runtime/Thread.h"

#include <memory>

namespace ToyScript
{
	namespace Runtime
	{
		void Init();

		std::shared_ptr<Thread> CreateThread();

		// �ӵ�һ�ļ����������̣߳��������Ĭ�ϵ�ϵͳģ��
		// ���ļ��������ģ��
		std::shared_ptr<Thread> CreateThread(std::string const& filePath);

		// ��ĳ��ģ�鴴�������̣߳������������ģ���Ĭ��ϵͳģ��
		std::shared_ptr<Thread> CreateThread(Module const& module);
	};
}