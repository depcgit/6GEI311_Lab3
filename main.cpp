#include <Python.h>
#include <string>
#include <iostream>
#include "MediaPlayer.h"
#include "Functions.h"


static PyObject* Start(PyObject* self, PyObject* args)
{
	char* objectBuff = NULL;
	char* pathCString = NULL;

	if (!PyArg_ParseTuple(args, "ss", &objectBuff, &pathCString))
	{
		printf("Failed to parse arguments\n");
		return NULL;
	}
	printf("Opening: %s \n", pathCString);

	string pathString = pathCString;
	wstring pathWString = s2ws(pathString);
	LPCWSTR pathLPCWSTR = pathWString.c_str();
	MediaPlayer* mediaPlayer = MediaPlayer::GetInstance();
	mediaPlayer->Start(pathLPCWSTR);
	return Py_BuildValue("i", 0);
}


static PyObject* PlayPause(PyObject* self, PyObject* args)
{
	std::cout << "Play/Pause" << endl;
	MediaPlayer* mediaPlayer = MediaPlayer::GetInstance();
	mediaPlayer->PlayPause();
	return Py_BuildValue("i", 0);
}

static PyObject* Quit(PyObject* self, PyObject* args)
{
	std::cout << "Quit" << endl;
	MediaPlayer* mediaPlayer = MediaPlayer::GetInstance();
	mediaPlayer->Quit();
	MediaPlayer::DeleteInstance();
	return Py_BuildValue("i", 0);
}

static PyObject* Replay(PyObject* self, PyObject* args)
{
	std::cout << "Replay" << endl;
	MediaPlayer* mediaPlayer = MediaPlayer::GetInstance();
	mediaPlayer->Replay();
	return Py_BuildValue("i", 0);
}

static PyObject* Accelerate(PyObject* self, PyObject* args)
{
	std::cout << "Accelerate" << endl;
	MediaPlayer* mediaPlayer = MediaPlayer::GetInstance();
	mediaPlayer->Accelerate();
	return Py_BuildValue("i", 0);
}


static PyMethodDef methods[] = {
	{"PlayPause", (PyCFunction)PlayPause, METH_NOARGS,
	"This method takes no argument and returns \"0\". It pauses or resumes the video."},
	{"Replay", (PyCFunction)Replay, METH_NOARGS,
	"This method takes no argument and returns \"0\". Starts the video from the beginning."},
	{"Accelerate", (PyCFunction)Accelerate, METH_NOARGS,
	"This method takes no argument and returns \"0\". Accelerates the playback speed"},
	{"Quit", (PyCFunction)Quit, METH_NOARGS,
	"This method takes no argument and returns \"0\". It quits the video player."},
	{"Start", (PyCFunction)Start, METH_VARARGS,
	"This method takes the video file path as an argument and returns \"0\". It opens the video file in the player."},
	{NULL, NULL, 0, NULL}
};


static PyModuleDef Lab3 =
{
	PyModuleDef_HEAD_INIT,
	"Lab3",
	"NULL",
	0,
	methods
};

PyMODINIT_FUNC PyInit_Lab3(void)
{
	return PyModule_Create(&Lab3);
}




