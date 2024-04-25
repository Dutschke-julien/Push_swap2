#include "PushSwap.hpp"


PushSwap::iterator& PushSwap::iterator::operator++(int)
{
	if (_node != nullptr)
		_node = _node->next;
	return (*this);
}

PushSwap::iterator& PushSwap::iterator::operator--(int)
{
	if (_node != nullptr)
		_node = _node->prev;
	return (*this);
}

PushSwap::iterator& PushSwap::iterator::operator=(const iterator& it)
{
	_node = it._node;
	return (*this);
}

PushSwap::iterator& PushSwap::iterator::operator=(Node *node)
{
	_node = node;
	return (*this);
}

Node* PushSwap::iterator::operator*()
{
	return (_node);
}


PushSwap::iterator& PushSwap::iterator::begin()
{
	while (_node->prev != nullptr)
		_node = _node->prev;
	return (*this);
}

PushSwap::iterator& PushSwap::iterator::begin(Node *node)
{
	_node = node;
	while (_node->prev != nullptr)
		_node = _node->prev;
	return (*this);
}

PushSwap::iterator& PushSwap::iterator::end()
{
	while (_node->next != nullptr)
		_node = _node->next;
	return (*this);
}

PushSwap::iterator& PushSwap::iterator::end(Node *node)
{
	_node = node;
	while (_node->next != nullptr)
		_node = _node->next;
	return (*this);
}
